#include<stdio.h>
#include<string.h>
int sort(char c,char s[27])
{
	int i;
	for(i=0;i<strlen(s);i++)
		if(s[i]==c)     break;
	if(i==strlen(s))    return 0;
	else   return 1;
}
int main()
{
	char s1[27],s2[27],sos[27],sas[27],ses[27],sns[27];
	int a,b,c,d,t=1;
	char i;
	while(gets(s1)!=NULL)
	{
		if(t==0)         printf("\n");
		gets(s2);
		a=b=c=d=0;
		for(i=97;i<123;i++)
		{
			if(sort(i,s1)||sort(i,s2))          sos[a++]=i;
			if(sort(i,s1)&&sort(i,s2))          sas[b++]=i;
			if((sort(i,s1)&&!sort(i,s2))||(!sort(i,s1)&&sort(i,s2)))       ses[c++]=i;
			if(!sort(i,s1)&&!sort(i,s2))        sns[d++]=i;			
		}
		sos[a]=0;
		sas[b]=0;
		ses[c]=0;
		sns[d]=0;
		printf("in s1 or s2:%s\n",sos);
		printf("in s1 and s2:%s\n",sas);
		printf("in s1 but not in s2 ,or in s2 but not in s1:%s\n",ses);
		printf("not in s1 and s2:%s\n",sns);
		t=0;
	}
	return 0;
}