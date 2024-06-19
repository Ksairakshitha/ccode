#include<stdio.h>
#include<conio.h>
void tow(int n, char A,char B,char c);
void main()
{
   int n;
   clrscr();
   printf("ENTER THE NUMBER OF DISKS  :  ");
   scanf("%d",&n);
   printf("MOVES INVOLVED IN TOWER OF HANOI ARE\n");
   tow(n,'A','C','B');
   getch();
}
void tow(int n, char A,char C,char B)
{
   if(n==1)
      printf("\nmove disk 1 from pole %c to pole %c\n",A,C);
   else
   {
      tow(n-1,A,B,C);
      printf("move disk %d from pole %c to pole %c",n,A,C);
      tow(n-1,B,C,A);
   }
}