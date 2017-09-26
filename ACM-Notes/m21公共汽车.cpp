#include<stdio.h>
int main()
{
	int S,i,m,n,max;
	while(scanf("%d",&S)!=EOF)
	{
		if(S==2)   max=1;
		else
		{
			m=S-1;
			for(i=2,max=0;i<S;i++)
			{
				if(m>max)  max=m;
				m=m+S-i-i+1;
			}
		}
		for(i=1,n=0;i<S;i++)
			n+=i;
		printf("%d %d\n",max,n);
	}
	return 0;
}