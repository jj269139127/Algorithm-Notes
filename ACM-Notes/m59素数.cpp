#include<stdio.h>
#include<math.h>
int main()
{
int M,N,n,m,k,j;
while(scanf("%d%d",&M,&N)!=EOF)
{
for(m=M,n=0;m<=N;m++)
{
	k=sqrt(m);
	if(m==1) continue;
	for(j=2;j<=k;j++)
		if(m%j==0) break;
	if(j>=k+1)  n++;
}
printf("%d\n",n);
}
return 0;
}