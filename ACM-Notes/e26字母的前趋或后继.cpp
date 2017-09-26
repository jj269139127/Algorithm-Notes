#include<stdio.h>
int main()
{
    char ch;
    while (scanf("%c",&ch)!=EOF)
    {
    if(ch<=109)  
          printf("%c\n",ch+1);
    if(ch>109)  
          printf("%c\n",ch-1);
    getchar();
    }
    return 0;
}