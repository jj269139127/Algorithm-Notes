#include<stdio.h>
#include<string.h>
int main() 
{
	int n,m,i,k,M[10];
	char a[10][100];
    while (scanf("%d",&n)!=EOF) 
	{
		    getchar();
		for(i=0;i<n;i++)
		{
			gets(a[i]);
			scanf("%d",&M[i]);
			getchar();
		}
		for(k=0;k<n;k++)
		{
			m=strlen(a[k]);
			for(i=0;i<m;i++)
				if(a[k][i]>='a'&&a[k][i]<='z')
					a[k][i]-=32;
			for(i=0;i<m;i++)
			{
				if(a[k][i]>='A'&&a[k][i]<='Z')
				{
					if(i==0)  printf("%d",a[k][i]-64+M[k]);
					else printf(" %d",a[k][i]-64+M[k]);
				}
				else if(a[k][i]==' ')
				{
					if(i==0)   printf("0");
					else printf(" 0");
				}
				else
				{
					if(i==0)  printf("%d",a[k][i]+100);   
					else printf(" %d",a[k][i]+100);
				}
			}
			printf("\n");
		}

    }
    return 0;
}