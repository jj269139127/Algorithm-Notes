#include<stdio.h>
int main()
{
    int n,i;
    double s;
    while(scanf("%d",&n)!=EOF)
    {   
        s=0;
        for(i=1;i<=n;i++)
            if(n%i==0)       s+=i;
        printf("%.2f\n",s/n);
    }
}