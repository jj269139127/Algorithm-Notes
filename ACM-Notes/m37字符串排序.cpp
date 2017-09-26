#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],t;
	int n,i,j,k;
	while(gets(str)!=NULL)
	{
		n=strlen(str);
		for(i=0;i<n-1;i++)
		{
			k=i;
			for(j=i+1;j<n;j++)
				if(str[k]>str[j])     k=j;
			if(k!=i)
			{t=str[i];str[i]=str[k];str[k]=t;}
		}
		puts(str);

	}
	return 0;
}