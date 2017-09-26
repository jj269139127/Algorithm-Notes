#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	int i;
	while(gets(a)!=NULL)
	{
		if(a[0]!='-')
			puts(a);
		else
		{
			for(i=1;i<strlen(a);i++)
				printf("%c",a[i]);
			printf("\n");
		}
	}
	return 0;
}