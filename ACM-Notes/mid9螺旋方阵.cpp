#include<stdio.h>
int main()
{
	int N,n,m,i,j,t,a[10][10],p=1;
	while(scanf("%d",&N)!=EOF)
	{
		if(p==0)       printf("\n");
		m=1;
		if(N==1)     {printf("1\n");continue;}
		for(n=0;n<N/2;n++)
		{
			i=j=n;
			for(t=1;t<=4;t++)
			{
				if(t==1)
					for(;j<N-n-1;j++)
						a[i][j]=m++;
				if(t==2)
					for(;i<N-n-1;i++)
						a[i][j]=m++;
				if(t==3)
					for(;j>=n+1;j--)
						a[i][j]=m++;
				if(t==4)
					for(;i>=n+1;i--)
						a[i][j]=m++;
			}
			if(N%2==1)       a[N/2][N/2]=N*N;
		}
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				if(j==0)
					printf("%d",a[i][j]);
				else printf(" %d",a[i][j]);
			}
			printf("\n");
		}
		p=0;
	}
	return 0;
}