#include<stdio.h>
int main()
{
    int i,n,s,a;
    while (scanf("%d",&n)!=EOF)
    {
    for(i=1,s=0,a=1;i<=n;i++)
       {
        s+=a;
        a*=2;
       }
    printf("%d\n",s);
    }
    return 0;
}