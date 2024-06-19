#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
   int n,r;
   clrscr();
   printf("ENTER THE VALUE OF N :  ");
   scanf("%d",&n);
   r=fact(n);
   printf("FACTORIAL IS  : %d  ",r);
   getch();
}
int fact(int n)
{
  if(n==0)
    return 1;
  else
     return (fact(n-1)*n);
}
