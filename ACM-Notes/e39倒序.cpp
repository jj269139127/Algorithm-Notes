#include<stdio.h>
#include<string.h>
int main() 
{
	int n,i,j;
    while (scanf("%d",&n)!=EOF) 
	{
		if(n==0)   continue;
		char a[20][100];
		getchar();
		for(i=0;i<n;i++)
			gets(a[i]);
		for(i=0;i<n;i++)
		{
			for(j=strlen(a[i])-1;j>=0;j--)
				putchar(a[i][j]);
			printf("\n");
		}
    }
    return 0;
}

