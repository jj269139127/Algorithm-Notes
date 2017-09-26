#include<stdio.h>
int main()
{
    int a,b,t;
    while (scanf("%d%d",&a,&b)!=EOF)
    {
    if (a>b)
		{
		t=a;a=b;b=t;
		}
    printf("%d %d\n",a,b);
    }
    return 0;
}