#include<stdio.h>
int main()
{
    int i,j,n,m,gewei,shiwei,baiwei,qianwei;
    while(scanf("%d",&n)!=EOF)
    {
        m=0;
	for(j=34;j<100;j++)
        {
            i=j*j;
            gewei=i%10;
            shiwei=(i/10)%10;
            baiwei=(i/100)%10;
	    qianwei=i/1000;
	    if((qianwei+shiwei)==(baiwei*gewei)) 
	          m++;
            if(m==n)    break;
	}   
        printf("%d\n",i);
    }
    return 0;
}