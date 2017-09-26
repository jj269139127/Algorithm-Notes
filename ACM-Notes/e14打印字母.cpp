#include<stdio.h>
int main()
{
    char ch;
    while (scanf("%c",&ch)!=EOF)
    {
    printf("%d\n",ch);
    getchar();
    }
    return 0;
}