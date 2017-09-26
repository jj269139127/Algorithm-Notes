#include<stdio.h>
int main()
{
	int T,i,j,n,N,m;
	while(scanf("%d",&T)!=EOF)
	{
		for(i=1;i<=1000000;i++)
		{
			if(i%10!=7)     continue;
			n=0;
			N=i;
			while(N>0)
			{
				n++;
				N/=10;
			}
			for(j=1,m=7;j<n;j++)
				m*=10;
			m+=i/10;
			if((double)m/i==T)     break;
		}
		if(m/i==T)     printf("%d\n",i);
		else        printf("No\n");

	}
	return 0;
}