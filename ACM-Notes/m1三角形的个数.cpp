#include<stdio.h>
int main()
{
	int n,a,b,c,N;
	while(scanf("%d",&n)!=EOF)
	{
		N=0;
		for(a=1;a<n/3;a++)
			for(b=a+1;b<n/2;b++)
			{
				c=n-a-b;
				if(c<=b)    break;
				else 
					if(a+b>c&&a+c>b&&b+c>a)
						N++;
			}
		printf("%d\n",N);
	}

	return 0;
}