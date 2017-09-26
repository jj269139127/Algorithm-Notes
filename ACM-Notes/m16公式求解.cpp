#include<stdio.h>
int main()
{
	int a,b,x,y,i=1;
	scanf("%d%d",&a,&b);
	while(a!=0||b!=0)
	{
                if(i++>1)   printf("\n");	
		for(x=1;x<=100;x++)
			for(y=1;y<=100;y++)
				if((a*a+x*x)==(b*b+y*y))
					printf("%d %d\n",x,y);
		scanf("%d%d",&a,&b);

	}
	return 0;
}