#include<stdio.h>
int main()
{
	int M,N,i,I,j,k,a[100],max,m,min,t=1;
	while(scanf("%d%d",&M,&N)!=EOF)
	{	
		if(t!=1)   printf("\n");
		for(i=0;i<M;i++)
			scanf("%d",&a[i]);
		max=min=0;
		for(i=0;i<N;i++)
			max=min+=a[i];
		for(i=0;i<M;i++)
		{
			I=i;
			for(j=0,m=0,k=0;k<N;j++,k++)
			{
				if((I+j)==M)    {I=0;j=0;}
				m+=a[I+j];
			}
			if(m>max)    max=m;
			if(m<min)    min=m;				
		}
		printf("Max=%d\nMin=%d\n",max,min);
		t=0;
	}
	return 0;
}