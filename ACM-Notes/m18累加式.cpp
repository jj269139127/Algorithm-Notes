#include<stdio.h>
int main()
{
	int i,n;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<=n;i++)
		{
			if(i==1)   printf("%d",i);
			else     printf("+%d",i);
		}
		for(i=n-1;i>=1;i--)
			printf("+%d",i);
		printf("\n");
	}
	return 0;
}