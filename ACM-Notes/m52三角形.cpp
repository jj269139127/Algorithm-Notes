#include<stdio.h>
int main()
{
	int i,j,n,m,k=0;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		if(k!=0)   printf("\n");
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{			
				if(m==10)   m=1;
				if(j==1)  printf("%d",m++);
				else printf(" %d",m++);
			}
			printf("\n");
		}
		k=1;
	}
	return 0;
}