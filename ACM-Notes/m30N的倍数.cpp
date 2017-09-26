#include<stdio.h>
int main()
{
	int n,i,t,digit;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=n;i%n==0;i+=n)
		{
			t=i;
			while (t>0)
			{
				digit=t%10;
				if(digit!=0&&digit!=1)
					break;
				t/=10;
			}
		    if(t<=0)  
			{
				printf("%d\n",i);
				break;
			}
		}
	}

	return 0;
}