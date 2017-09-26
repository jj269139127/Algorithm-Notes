#include<stdio.h>
#include<math.h>
int main()
{
int a[100];
int N,i,j,k,n,p,m,l,r=1;
for(m=2,l=0;m<=100;m++)
{
	k=sqrt(m);
	for(j=2;j<=k;j++)
		if(m%j==0) break;
	if(j>=k+1)  a[l++]=m;
}
scanf("%d",&n);
while(r<=n)
{  
   r++;
   scanf("%d",&N);                          
   for(i=0;i<n;i++)
   {
	   for(j=i;j<l;j++)
	   {
		 p=a[i]+a[j];
		 if(p==N)
		 {
			 printf("%d %d\n",a[i],a[j]);
			 i=l;
		 }
	   }
   }
}
return 0;
}