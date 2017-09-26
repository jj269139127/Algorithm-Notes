#include<stdio.h>
#include<string.h>
int main()
{
	int	i,n;
	char a[200];
	while(scanf("%s",a)!=EOF)
	{
		n=strlen(a);
		for(i=0;i<n/2;i++)
		{
			if(a[i]==a[n-1-i])  continue;
			else break;
		}
		if(i>=n/2)
			printf("Yes\n");
		else  printf("No\n");
	}
return 0;
}