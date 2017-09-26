#include<stdio.h>
#include<math.h>
int main()
{
	int L,n,a[100],b[100],maxa,maxb,m,i;
	while(scanf("%d%d",&L,&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d%d",&a[i],&b[i]);
		for(i=1,maxa=a[0];i<n;i++)
			if(a[i]<maxa)    maxa=a[i];
		for(i=1,maxb=b[0];i<n;i++)
			if(b[i]>maxb)    maxb=b[i];
		m=L-maxb+maxa;
		printf("%d\n",m);			
	}
	return 0;
}