#include<stdio.h>
int main()
{
    int c;
    double a,m,d,s,money;
    while (scanf("%lf%lf%lf",&a,&m,&s)!=EOF)
    {
    if(s>=2000)  c=8;
    else      c=(int)s/250;
    switch(c)
       {
          case 0: d=0;break;
          case 1: d=1;break;
          case 2: 
          case 3: d=8;break;
          case 4: 
          case 5: 
          case 6: 
          case 7: d=10;break;
          case 8: d=15;break;
       }
       money=a*m*s*(1-d/100);
    printf("%.2f\n",money);
    }
    return 0;
}