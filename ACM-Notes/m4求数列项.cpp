#include<stdio.h>
int main()
{
	int n,i,a[50];
	while(scanf("%d",&n)!=EOF)
	{
		a[0]=1;
		a[1]=5;
		for(i=2;i<n;i++)
			a[i]=a[i-1]+(i-2)*3+7;
		printf("%d\n",a[n-1]);
	}
	return 0;
}