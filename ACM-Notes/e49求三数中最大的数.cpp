#include<stdio.h>
int main()
{
    int a,b,c,t;
    while (scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
    if(a<b)
      {
        a=b;
        if(a<c)   a=c;
      }
    else if(a<c)  a=c;
    printf("%d\n",a);
    }
    return 0;
}