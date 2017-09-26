#include<stdio.h>
int main()
{
	int a[200],n,i,j,k,t;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=1;i<n;i++)
			for(j=0;j<i;j++)
				if(a[j]==a[i])
				{
					for(k=j;k<n-1;k++)
						a[k]=a[k+1];
					n--;
					i--;
				}
		for(i=0;i<n-1;i++)
		{
			k=i;
			for(j=i+1;j<n;j++)
				if(a[k]>a[j])    k=j;
				if(k!=i)
				{t=a[i];a[i]=a[k];a[k]=t;}
		}
		for(i=0;i<n;i++)
		{
			if(i==0)
				printf("%d",a[i]);
			else
				printf(" %d",a[i]);
		}
		printf("\n");
	}
	return 0;
}