#include<stdio.h>
int main()
{
	int i,n,s;
	while(scanf("%d",&n)!=EOF)
	{
		s=n;
		for(i=1;i<=n/2;i++)
			if(n%i==0)   s+=i;
		printf("%d\n",s);
	}
	return 0;
}