#include<stdio.h>
int main()
{
	int i,j,k,l,m,n,a[50],s;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(k=1,m=0;k<=n;k++)
			for(i=0;i<n;i++)
			{
				if(k==1)
				{if(a[i]%11==0)   m++;}
				else
				{
				   for(j=i+1;j<n;j++)
				   {
					   s=a[i]+a[j];
					   if(s%11==0)    m++;
				   }
				}
			}
		printf("%d\n",m);
	}
	return 0;		
}