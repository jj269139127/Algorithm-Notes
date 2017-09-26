#include<stdio.h>
int main()
{
    int x;
    while (scanf("%d",&x)!=EOF)
    {
    switch(x)
       {
          case 2: 
          case 3: printf("One.\n");break;
          case 4: printf("Two.\n");break;
          case 5:
          case 6: printf("Three.\n");break;
          default: printf("No.\n"); 
       }  
    }
    return 0;
}