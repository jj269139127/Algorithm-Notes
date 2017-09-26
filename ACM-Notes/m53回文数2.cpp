#include<stdio.h>
int main()
{
	int	N,M,i,j,k,m;
	while(scanf("%d",&N)!=EOF)
	{
		int a[10],b[10000];
		M=N;
		i=0;
		while(M!=0)
		{
			a[i++]=M%10;
			M/=10;
		}
		for(j=0;j<i/2;j++)
		{
			if(a[j]==a[i-1-j])  continue;
			else break;
		}
		if(j>=i/2)
		{
			for(m=0,M=N;M!=0;m++)
			{
				if(M%2==0)  b[m]=0;
				else   b[m]=1;
				M/=2;
			}
			for(k=0;k<m/2;k++)
			{
				if(b[k]==b[m-1-k])  continue;
				else break;
			}
			if(k>=m/2)
				printf("Yes\n");
			else  printf("No\n");
		}
		else  printf("No\n");
	}
return 0;
}