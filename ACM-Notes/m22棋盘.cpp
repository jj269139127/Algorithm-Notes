#include<stdio.h>
int main()
{
	int n,i,j,I,J,m=1;
	while(scanf("%d%d%d",&n,&I,&J)!=EOF)
	{
		if(m!=1)    printf("\n");
		for(j=1;j<=n;j++)
			printf("(%d,%d)",I,j);
		printf("\n");
		for(i=1;i<=n;i++)
			printf("(%d,%d)",i,J);
		printf("\n");
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				if(I-i==J-j)   printf("(%d,%d)",i,j);
		printf("\n");
		for(i=n;i>=1;i--)
			for(j=1;j<=n;j++)
				if(I-i==j-J)   printf("(%d,%d)",i,j);
		printf("\n");
		m=0;
	}
	return 0;
}