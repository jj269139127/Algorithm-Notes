#include<stdio.h>
int main()
{
	int n,i,a[1200],max,t,I;
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		max=a[0];
		I=0;
		for(i=1;i<n;i++)
			if(a[i]>max)    {I=i;max=a[i];}
		if(max>a[0])
		{t=a[0];a[0]=a[I];a[I]=t;}
		for(i=0;i<n;i++)
		{
			if(i==0)    printf("%d",a[i]);
			else   printf(" %d",a[i]);
		}
		printf("\n");
	}
	return 0;
}