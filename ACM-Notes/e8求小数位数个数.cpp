#include <stdio.h>
#include <string.h>
int main()
{
	int i,n;
	char a[100];
	while (scanf("%s",a)!=EOF)
	{
		n=-1;
		for(i=0;i<strlen(a);i++)
		{	
			if(a[i]=='.')
			{n=0;  continue;}
			if(n>=0)   n++;
		}
		if(n==-1)   n=0;
		printf("%d\n",n);
	}
	return 0;
}