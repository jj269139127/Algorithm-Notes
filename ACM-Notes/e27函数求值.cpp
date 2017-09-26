#include<stdio.h>
int main()
{
    double x,y;
    while (scanf("%lf",&x)!=EOF)
    {
    if(x!=2)
        y=1.0/(x-2);
    if(x==2)
        y=x;
    printf("%.4f\n",y);
    }
    return 0;
}