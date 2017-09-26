#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,remain;
	while(scanf("%d",&k)!=EOF&&k!=0)
	{
		int a[1000]={0};
		remain=k;
		for(i=0;;i++)
		{
			a[i]=i+1;
			remain-=a[i];
			if(remain<=a[i])   break;
		}
		for(j=i;remain!=0;j--)
		{
			a[j]++;
			remain--;
		}
		for(j=0;j<i+1;j++)
		{
			if(j==0)  printf("%d",a[j]);
			else      printf(",%d",a[j]);
		}
		printf("\n");
	}
	return 0;
}