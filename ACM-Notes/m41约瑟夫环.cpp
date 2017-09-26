#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,i,j,k,a[100],b[100],N;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		k=0;
		for(i=0;i<n;i++)
		a[i]=1;
		N=n;
		for(i=0,j=1;n!=0;i++)
		{
			if(i==N)     	i=0;
			if(a[i]!=0)
			{
				if(j%m==0)
				{b[k++]=i+1;a[i]=0;n--;}
				j++;
			}
		}	
		for(i=0;i<k;i++)
		{
			if(i==0)     printf("%d",b[i]);
			else         printf(" %d",b[i]);
		}
		printf("\n");
	}
	return 0;
}