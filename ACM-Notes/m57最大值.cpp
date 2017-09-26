#include<stdio.h>
int main()
{
int i,j,k,N,m,L1,L2,p;
while(scanf("%d%d%d",&N,&L1,&L2)!=EOF)
	{
	    int a[20]={0};
        for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	    int max=a[0];
		for(i=0;i<L1;i++)
			max+=a[i];		
		
		for(i=L1;i<=L2;i++)
		{
		for(j=0;j<N;j++)
			{
			   for(k=1,m=0,p=j;k<=i;k++)
				   m+=a[p++];
			   max=max>m?max:m; 
			}
		}
		printf("%d\n",max);
	}
return 0;
}