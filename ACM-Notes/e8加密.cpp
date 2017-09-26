#include<stdio.h>
#include<string.h>
int main()
{
	int	i;
	char a[100];
	while(gets(a)!=NULL)
	{
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]>='0'&&a[i]<='9')
				a[i]+=49;
			else if(a[i]>='a'&&a[i]<='j')
				a[i]-=49;
		}
		puts(a);
	}
    return 0;
}