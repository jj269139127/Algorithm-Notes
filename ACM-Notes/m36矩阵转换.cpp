#include<stdio.h>
int main()
{
	int n,i,j,t=1,a[10][10];
	while(scanf("%d",&n)!=EOF)
	{
		if(t!=1)   printf("\n");
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(j==0)
					printf("%d",a[j][i]);
				else
					printf(" %d",a[j][i]);
			}
			printf("\n");
		}
		t=0;
	}
	return 0;
}