#include<stdio.h>
int main()
{
    int i,n,f1,f2,f3,f4,f5,f;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d%d%d%d%d",&f1,&f2,&f3,&f4,&f5);
    f=f1+f2+f3+f4+f5;
    printf("%d %d %d %d %d %d\n",f1,f2,f3,f4,f5,f);
    }
    return 0;
}