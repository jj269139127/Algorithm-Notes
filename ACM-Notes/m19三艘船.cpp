#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,s,n;
	while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)!=EOF)
	{
		for(s=c*f;;s+=24*f)
		{		
			for(n=a*d;n<s;n+=24*d);
			if(n!=s)    continue;
			for(n=b*e;n<s;n+=24*e);	
			if(n!=s)    continue;
			else
			{printf("%d\n",s);break;}
		}
	}
	return 0;
}


