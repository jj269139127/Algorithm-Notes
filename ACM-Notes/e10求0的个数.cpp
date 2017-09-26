#include<stdio.h>
int main()
{
     int n,sum;
	 while (scanf("%d",&n)!=EOF)
     {
     for(sum=0;n!=0;)
	 {
		 n/=5;
		 sum+=n;
	 }
	 printf("%d\n",sum);
     }
     return 0;
}