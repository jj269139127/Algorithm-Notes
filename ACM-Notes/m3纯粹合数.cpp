#include<stdio.h>
int main()
{
	int N,n,M,m,i,j;
	while(scanf("%d",&N)!=EOF)
	{
		n=0;
		for(M=100;;M++)
		{
			for(i=2;i<=M;i++)
				if(M%i==0)  break;
			if(i<M)
			{
				for(j=10,m=M%10;m!=M;j*=10)
				{
					if(m==0)      {m=M%j;continue;}
					for(i=2;i<=m;i++)
						 if(m%i==0)  break;
					if(i>=m)   break;
					m=M%j;
				}
				if(m==M) 
					n++;				
				if(n==N)       break;
			}
		}
		printf("%d\n",M);
	}
	return 0;
}