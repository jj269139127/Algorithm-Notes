#include<stdio.h>
#include<math.h>
int main()
{
	int N,n,M,m,i,j,k;
	while(scanf("%d",&N)!=EOF)
	{
		n=0;
		for(M=1000;;M++)
		{
			k=sqrt(M);
			for(i=2;i<=k;i++)
				if(M%i==0)  break;
			if(i>=k+1)
			{
				for(j=10,m=M%10;m!=M;j*=10)
				{
					if(m==0||m==1)     break;
					k=sqrt(m);
					for(i=2;i<=k;i++)
						 if(m%i==0)  break;
					if(i<k+1)   break;
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