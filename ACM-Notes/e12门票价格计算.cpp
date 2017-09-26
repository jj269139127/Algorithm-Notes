#include<stdio.h>
int main()
{
    int x;
    double p,money;
    while (scanf("%d",&x)!=EOF)
    {
    if(x<=20)     p=1;
    else if(x<=40)     p=0.9; 
    else if(x<=80)     p=0.85; 
    else if(x<=120)     p=0.8; 
    else    p=0.7;
    money=5*x*p;  
    printf("%.2f\n",money);
    }
    return 0;
}