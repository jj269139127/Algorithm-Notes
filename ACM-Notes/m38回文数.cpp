#include<stdio.h>
int panduan(int x)                 //判断是否为回文数
{
	int a[10],n=0,i,digit;
	while (x>0)
    {
        digit=x%10;
        a[n++]=digit;
        x/=10;
	}
	for(i=0;i<n/2;i++)
	{
		if(a[i]==a[n-1-i])  continue;
		else break;
	}
	if(i>=n/2)
		return 1;
	else  return 0;
}
int main()
{
	int i,j,n,a[10],m,M,t,I,N,digit;
	while(scanf("%d",&n)!=EOF&&n!=0)
	{ 
		do
		{
			N=n;
			I=0;
			while (N>0)                //将n的每位存放在数组中
			{
				digit=N%10;
				a[I++]=digit;
				N/=10;
			}			              
			for(i=0,m=0;i<I;i++)          //得到倒序后的整数m
			{
				for(j=I-1-i,t=1;j>0;j--)
					t*=10;
				m+=a[i]*t;
			}
			M=n+m;
			printf("%d+%d=%d\n",n,m,M);
			if(panduan(M))     break;
			else n=M;
		}while(1);
	}
	return 0;
}