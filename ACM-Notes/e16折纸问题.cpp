#include<stdio.h>
int main()
{
     int n,i,num;
     while (scanf("%d",&n)!=EOF)
   {
     for(i=0,num=1;num<n*100;i++)
	 {
		 num*=2;
	 }
	 printf("%d\n",i);
   }
     return 0;
}