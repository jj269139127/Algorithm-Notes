#include<stdio.h>
#include<string.h>
struct Zimu
{
	char a;
	int num;
}zimu[26];
int main()
{
	struct Zimu t;
	int	i,j,k,n;
	char str[100];
	while(scanf("%s",str)!=EOF)
	{
		n=0;
		for(i=0;str[i]!='!';i++)
		{			
			if(str[i]>='a'&&str[i]<='z')
				str[i]-=32;				
			for(j=0;j<n;j++)
				if(str[i]==zimu[j].a)
					break;
			if(j<n)
				(zimu[j].num)++;
			else
			{
				zimu[n].a=str[i]; 
			    zimu[n].num=1;
				n++;
			}
		}
		for(i=0;i<n;i++)
		{
			k=i;
			for(j=i+1;j<n;j++)
				if(zimu[k].a>zimu[j].a)   k=j;
			if(k!=i)
			{
				t=zimu[i];
				zimu[i]=zimu[k];
				zimu[k]=t;
			}
		}					
		for(i=0;i<n;i++)
			printf("%c:%d\n",zimu[i].a,zimu[i].num);
	}
    return 0;
}