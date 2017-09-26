#include<stdio.h>
int main()
{
	int k,index,m,n;
	while(scanf("%d",&k)!=EOF)
	{				
		for(m=k;;m++)
		{	
			n=2*k;
			for(index=0;n!=k;)
			{
				index =(index+m)%n;
                if(index<k)    break;
				else n--;
			}           
			if(n==k)    break;
		}
		printf("%d\n",m+1);
	}
	return 0;
}