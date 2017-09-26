#include<stdio.h>
int main()
{
	int i,n,a[100],m,max,A,N;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		m=1;
		max=1;
		N=A=a[0];
		for(i=1;i<n;i++)
		{
			if(a[i]==A)    
			{
				m++;  			
				if(m>max)   {max=m;N=A;}
			}
			else
			{	
				A=a[i];
				m=1;
			}
		}
		printf("%d %d\n",N,max);
	}
	return 0;
}