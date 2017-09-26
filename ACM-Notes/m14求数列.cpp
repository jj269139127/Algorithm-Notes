#include<stdio.h>
int jisuan(int n)
{
	if(n==1)
		return 1;
	else
	   n=jisuan(n-1)+3*(n-1)+1;
	return n;
}
int main()
{
	int n,S;
	while(scanf("%d",&n)!=EOF)
	{
		S=jisuan(n);
		printf("%d\n",S);
	}
	return 0;
}