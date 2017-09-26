#include<stdio.h>
int main()
{
	int N,i,j,n,I,J,t=1;
	while(scanf("%d",&N)!=EOF)
	{
		if(t==0)       printf("\n");
		int a[20][20]={0};
		for(n=1,i=0,j=N/2;n<=N*N;n++)
		{
			if(n==1)   a[i][j]=n;
			else
			{
				I=i--;
				J=j++;
				if(i<0)  i=N-1;
				if(j>N-1)  j=0;
				if(a[i][j]==0)   a[i][j]=n;
				else if (I==0&&J==N-1)
				{a[I+1][J]=n;i=I+1;j=J;}
				else 
				{a[I+1][J]=n;i=I+1;j=J;}
			}
		}
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				if(j==N-1)
					printf("%d",a[i][j]);
				else
					printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		t=0;
	}
	return 0;
}
