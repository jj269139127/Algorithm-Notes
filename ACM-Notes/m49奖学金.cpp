#include<stdio.h>
struct  student
{
	char  name[21];
	int x,y;
	char xsgb;
	char xb;
	int lw;
};
int main()
{
    struct  student  stu[100];
	int i,n,m,t,num,T=1;
	while(scanf("%d",&n)!=EOF)
	{
		if(T==1)         printf("\n");
        int s[100]={0};
		for(i=0;i<n;i++)
			scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].x,&stu[i].y,&stu[i].xsgb,&stu[i].xb,&stu[i].lw);
		for(i=0;i<n;i++)
		{
			if(stu[i].x>80&&stu[i].lw>0)    s[i]+=8000;
			if(stu[i].x>85&&stu[i].y>80)   s[i]+=4000;
			if(stu[i].x>90)     s[i]+=2000;
			if(stu[i].x>85&&stu[i].xb=='Y')    s[i]+=1000;
			if(stu[i].y>80&&stu[i].xsgb=='Y')   s[i]+=850;
		}
        m=s[0];
		t=0;
		for(i=1;i<n;i++)
			if(s[i]>m)
			{m=s[i];t=i;}		
		printf("%s\n%d\n",stu[t].name,s[t]);
		for(i=0,num=0;i<n;i++)
			num+=s[i];
		printf("%d\n",num);
		T=0;
	}
	return 0;
}