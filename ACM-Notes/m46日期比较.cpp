#include<stdio.h>
int main()
{
	int day1,month1,year1,day2,month2,year2,a;
	while(scanf("%d%d%d%d%d%d",&day1,&month1,&year1,&day2,&month2,&year2)!=EOF)
	{
		if(year1<year2)   a=1;
		else if(year1>year2)	  a=0;
		else
		{
			if(month1<month2)   a=1;
			else if(month1>month2)	a=0;
			else
			{
				if(day1<day2)   a=1;
				if(day1>day2)	a=0;
			}
		}
		if(a==1)
			printf("%02d %02d %04d is earlier than %02d %02d %04d\n",day1,month1,year1,day2,month2,year2);
		else
			printf("%02d %02d %04d is earlier than %02d %02d %04d\n",day2,month2,year2,day1,month1,year1);
	}
	return 0;
}
