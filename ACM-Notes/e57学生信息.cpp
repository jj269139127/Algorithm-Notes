#include<stdio.h>
struct student
{
	int number;
	char name[10];
	char sex[10];
	int age;
	int score;
};
int main()
{
	int i,j,k,N;
    struct student a[10],t;
	while(scanf("%d",&N)!=EOF)
	{
		for(i=0;i<N;i++)
			scanf("%d%s%s%d%d",&a[i].number,a[i].name,a[i].sex,&a[i].age,&a[i].score);
		for(i=0;i<N-1;i++)
		{
			k=i;
			for(j=i+1;j<N;j++)
				if(a[k].score>a[j].score)     k=j;
			if(k!=i)
				{t=a[i];a[i]=a[k];a[k]=t;}
		}
		for(i=0;i<N;i++)
			printf("%d %s %s %d %d\n",a[i].number,a[i].name,a[i].sex,a[i].age,a[i].score);
	}
	return 0;
}