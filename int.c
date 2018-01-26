#include<stdio.h>
#include<conio.h>

void main()
{
   int n,a,c=0;clrscr();
   printf("\n Enter the value of integer");
   scanf("%d",&n);
   a=n;


   while(n>0)
   {
       n=n/10;
       c++;
   }
   printf("\n The No of digits of %d are =%d ",a,c);
   getch();
}
