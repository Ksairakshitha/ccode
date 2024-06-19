#include<stdio.h>
#include<conio.h>
int fib(int n)
{
   if(n==0)
     return 0;
   else if(n==1)
     return 1;
  else
    return(fib(n-1)+fib(n-2));
}
int main()
{
   int n,i;
   printf("ENTER THE VALUE OF N :   ");
   scanf("%d"&n);
   printf("FIBONACCI SERIES  :  ");
   for(i=0;i<n;i++)
   {
       printf("%d \t",fib(i));
    }
    return 0;
}
