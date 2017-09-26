#include<stdio.h>
int main()
{
    int a,b,c,p,q,num,i,digit;
    while (scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        p=a*100+b*10+c;
	q=c*100+b*10+a;
	num=p*q;
        for(i=0;num>0;)
	{
		digit=num%10;
		num/=10;
		if(digit==a||digit==b||digit==c)
			i++;
	}
	printf("%d %d\n",p*q,i);
    }
    return 0;
}