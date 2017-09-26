#include<stdio.h>
int main()
{
	int a,b,s;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		s=0;
		printf("%d*%d=",a,b);
		if(a%2!=0)    
		{
			if(a==1)   printf("%d",b);
			else printf("%d+",b);
			s+=b;
		}
		while(a>=1)
		{
			a/=2;
			b*=2;
			if(a%2!=0)    
			{
				if(a==1)   printf("%d",b);
				else printf("%d+",b);
				s+=b;
			}		
		}
		printf("=%d\n",s);		
	}
	return 0;
}