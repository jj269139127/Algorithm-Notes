#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],*p;
	int s,i,j,k,m,n,digit,a[10],*pa;
	while(gets(str)!=NULL)
	{
		p=str;
		pa=a;
		n=0;
		i=0;
		if(str[0]>='0'&&str[0]<='9')
				i++;
		while(*p++)
		{		
			if((*p>='0') && (*p<='9'))
			   i++;
			else
			   {
					if (i>0)
					{
						digit=*(p-1)-48;       
						j=1;
						while (j<i)     
						{
							m=1;
							for (k=1;k<=j;k++)
								m=m*10;                  
							digit=digit+(*(p-1-j)-48)*m;  
							j++;                   
						}
						*pa=digit;               
						n++;
						pa++;                    
						i=0;
					}
				}
		}
		if(str[0]=='-')     {s=0;i=0;}
		else    {s=a[0];i=1;}
		for(k=0;k<strlen(str);k++)
		{
			if(str[k]=='+')    s+=a[i++];
			if(str[k]=='-')    s-=a[i++];
		}
		printf("%d\n",s);
	}
	return 0;
}