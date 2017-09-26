#include<stdio.h>
int main()
{
	int N,i,a;
	while(scanf("%d",&N)!=EOF)
	{
		for(i=1;i<=N;i++)
		{ 
			if(i==7)     printf("%d",i);
			else if(i%7==0)   printf(" %d",i);
			else 
			{
				a=i;
				while(a!=0)
				{
					if(a%10==7)   
					{printf(" %d",i);break;}
					a/=10;
				}
			}
		}
		printf("\n");
	}
	return 0;
}