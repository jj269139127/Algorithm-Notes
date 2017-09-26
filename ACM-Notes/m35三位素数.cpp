#include <stdio.h>
#include <math.h>
int panduan(int x)
{
	int i,k;
	k=sqrt(x);
    for(i=2;i<=k;i++)
			if(x%i==0)  break;
	if(i>=k+1)
		return 1;
	else return 0;
}
int main()
{
	int n,a,b,c,d,i=0,s[100],gewei,shiwei,baiwei;
	for(a=100;a<=999;a++)
	{
		gewei=a%10;
		shiwei=(a/10)%10;
		baiwei=a/100;
		b=baiwei+shiwei*10+gewei*100;
		c=gewei+shiwei+baiwei;
		d=gewei*shiwei*baiwei;
		if(panduan(a)&&panduan(b)&&panduan(c)&&(panduan(d)||d==0||d==1))
			s[i++]=a;			
	}
	while(scanf("%d",&n)!=EOF)
	{
		printf("%d\n",s[n-1]);
	}
	return 0;
}