#include<stdio.h>
int main()
{
	int a[5][5],i,j,k,p,q,m,max,l,m1,m2,m3;
	while(scanf("%d%d%d%d%d",&a[0][0],&a[0][1],&a[0][2],&a[0][3],&a[0][4])!=EOF)
	{
		max=0;
		for(i=1;i<5;i++)
			for(j=0;j<5;j++)
				scanf("%d",&a[i][j]);
		for(j=0;j<5;j++)
		{
			i=0;
			m=0;
			m+=a[0][j];
			for(k=0;k<5;k++)
			{
				m1=m;
				if(k==j)     continue;
				else         m+=a[1][k];
				for(p=0;p<5;p++)
				{
					m2=m;
					if(p==j||p==k)    continue;
					else     m+=a[2][p];
					for(q=0;q<5;q++)
					{
						m3=m;
						if(q==j||q==k||q==p)     continue;
				        else         m+=a[3][q];
						for(l=0;l<5;l++)
							if(l==j||l==k||l==p||l==q)      continue;
							else   m+=a[4][l];
						if(m>max)     max=m;
						m=m3;
					}
					m=m2;
				}
				m=m1;
			}
		}
		printf("%d\n",max);
	}
	return 0;
}