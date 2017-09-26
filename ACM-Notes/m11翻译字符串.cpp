#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,n;
	char a[100],b[1000];
	while(gets(a)!=NULL)
	{
		for(i=0,j=0;i<strlen(a);i++)
		{
			if(a[i]<'0'||a[i]>'9')
				b[j++]=a[i];
			else
			{
				n=a[i]-47;
				i++;
				for(k=1;k<=n;k++)
					b[j++]=a[i];
			}
		}
		for(i=0;i<j;i++)
		{
			printf("%c",b[i]);
			if((i+1)%3==0&&i!=j-1)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}