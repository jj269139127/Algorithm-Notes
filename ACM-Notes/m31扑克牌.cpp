#include<stdio.h>
struct Pai
{
	char hs;
	char dx;
	int num;
};
int main()
{
	int n,i,j,k,I,J,K;
	struct Pai  pai[13],t;
	while(scanf("%d",&n)!=EOF)
	{
		getchar();
		for(i=0;i<n;i++)
		{
			if(i!=0)     printf("\n");
			for(j=0;j<4;j++)
			{
				for(k=0;k<13;k++)
				{
					scanf("%c%c",&pai[k].hs,&pai[k].dx);
					getchar();
				}
				for(k=0;k<13;k++)
				{
					if(pai[k].dx=='A')        pai[k].num=13;
					if(pai[k].dx=='K')        pai[k].num=12;
					if(pai[k].dx=='Q')        pai[k].num=11;
					if(pai[k].dx=='J')        pai[k].num=10;
					if(pai[k].dx=='T')        pai[k].num=9;
					if(pai[k].dx>='2'&&pai[k].dx<='9')     pai[k].num=pai[k].dx-49;
				}
					
				for(I=0;I<12;I++)
				{
					K=I;
					for(J=I+1;J<13;J++)
						if(pai[K].num<pai[J].num||(pai[K].dx==pai[J].dx&&pai[K].hs<pai[J].hs))     K=J;
					if(K!=I)
					{t=pai[I];pai[I]=pai[K];pai[K]=t;}
				}
				for(k=0;k<13;k++)
				{
					if(k==0)       printf("%c%c",pai[k].hs,pai[k].dx);
					else           printf(" %c%c",pai[k].hs,pai[k].dx);
				}
				printf("\n");
			}				
		}
	}
	return 0;
}