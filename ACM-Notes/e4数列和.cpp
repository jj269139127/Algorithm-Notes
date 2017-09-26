#include<stdio.h>
int main()
{
    int i,n,s;
    while (scanf("%d",&n)!=EOF)
    {
    for(i=1,s=0;i<=n;i++)
        s+=i;
    printf("%d\n",s);
    }
    return 0;
}