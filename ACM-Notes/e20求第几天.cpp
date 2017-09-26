#include<stdio.h>
int main()
{
	int year,month,day,sum,max;
	while (scanf("%d%d%d",&month,&day,&year)!=EOF)
{
	for(sum=0,month=month-1;month>=1;month--)
	{
		switch(month) 
		{
		 case 1:
		 case 3:
		 case 5:
		 case 7:
		 case 8:
		 case 10:
		 case 12: max=31;break;
		 case 4:
		 case 6:
		 case 9:
		 case 11: max=30;break;
		 case 2:
			 if((year%4==0&&year%100!=0)||(year%400==0))
				max=29;
			 else max=28;break;
		}
		sum+=max;
	}
	printf("%d\n",day+sum);
}
	return 0;
}