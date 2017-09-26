#include<stdio.h>
int main()
{
	double a,b,s;
    char ch,ch1;
	scanf("%lf%lf",&a,&b);
    while(a!=0||b!=0)
	{
		ch1=getchar();
	    ch=getchar();
	    switch(ch)
		{
		case '+':printf("%.1f\n",a+b);break;
	    case '-':printf("%.1f\n",a-b);break;
		case '*':printf("%.1f\n",a*b);break;
		case '/':
			if(b==0)   {printf("Wrong!\n");break;}
			else {printf("%.1f\n",a/b);break;}
		}
        scanf("%lf%lf",&a,&b);
	}
    return 0;
}