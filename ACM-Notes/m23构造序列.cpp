#include<stdio.h>
int main()
{
	int n,i,j,k,N;
	while(scanf("%d",&n)!=EOF)
	{
        int a[50]={0};
		a[0]=a[1]=1;
		N=2;
		for(i=2;i<=n;i++)
			for(j=0;j<N;j++)
				if(a[j]+a[j+1]==i)
				{
					for(k=N;k>j+1;k--)
						a[k]=a[k-1];
					a[k]=i;
					N++;
				}
		for(i=0;i<N;i++)
			printf("%d",a[i]);
		printf("\n");
	}
	return 0;
}