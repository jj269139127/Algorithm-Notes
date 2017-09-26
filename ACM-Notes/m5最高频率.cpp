#include<stdio.h>
int main()
{
	int n,a[200],i,j,m,N,M;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		M=0;
		N=a[0];
		for(i=0;i<n;i++)
		{
			for(m=0,j=0;j<n;j++)
				if(a[j]==a[i])   m++;
			if(m>M)    
			{M=m;N=a[i];}
			if(m==M&&a[i]<N)
			{N=a[i];}
		}
		printf("%d\n",N);
	}
	return 0;
}
