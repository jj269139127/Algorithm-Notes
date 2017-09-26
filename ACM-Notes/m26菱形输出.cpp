#include<stdio.h>
#include<math.h>
int main()
{
	int N,i,j,hang,t=1;
	while(scanf("%d",&N)!=EOF)
	{
		if(t==0)       printf("\n");
		if(N==1)        {printf("Z\n");t=0;continue;}
		i=90;
		for(hang=1;hang<=N;hang++)
		{
			for(j=N-hang;j>0;j--)
				printf(" ");
			printf("%c",i--);
			if(hang==1)    {printf("\n");continue;}
			for(j=2*hang-3;j>0;j--)
				printf(" ");
			printf("%c\n",i--);
		}
		for(hang=N-1;hang>=1;hang--)
		{
			for(j=N-hang;j>0;j--)
				printf(" ");
			printf("%c",i--);
			if(hang==1)    {printf("\n");continue;}
			for(j=2*hang-3;j>0;j--)
				printf(" ");
			printf("%c\n",i--);
		}
		t=0;
	}
	return 0;
}