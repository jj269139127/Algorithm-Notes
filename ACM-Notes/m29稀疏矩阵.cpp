#include<stdio.h>
int main()
{
	int n,m,i,j,a[20][20],t=1;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(t==0)       printf("\n");
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				scanf("%d",&a[i][j]);
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				if(a[i][j]!=0)
				{
					printf("%d %d %d\n",i+1,j+1,a[i][j]);
					break;
				}
		t=0;
	}
	return 0;
}