#include<stdio.h>
int main()
{
	int	i,j,n;
	int a[11];
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
		{
			printf("0\n");
			continue;
		}
		i=0;
		while(n!=0)
		{
			a[i]=n%2;
			i++;
			n/=2;
		}
		for(j=i-1;j>=0;j--)
			printf("%d",a[j]);
		printf("\n");
	}
    return 0;
}