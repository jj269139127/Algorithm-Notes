#include<stdio.h>
int main()
{
	int i,j,m,n,a[50],s;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0,m=0;i<n;i++)
			for(j=i,s=0;j<n;j++)
			{
				s+=a[j];
				if(s%11==0)   m++;
			}
		printf("%d\n",m);
	}
	return 0;		
}