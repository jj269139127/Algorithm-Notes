#include<stdio.h>
int main()
{
  int x,n;
  while(x!=-1)
  {
  scanf("%d",&x);
  if(x>=90&&x<=100)   n=1;
  else if(x>=80&&x<=89)   n=2;
  else if(x>=60&&x<=79)   n=3;
  else if(x>=0&&x<60)   n=4;
  else  break;
  switch(n)
    {
       case 1:printf("A\n");break;
       case 2:printf("B\n");break;
       case 3:printf("C\n");break;
       case 4:printf("D\n");break;
    }
  }
  return 0;
}