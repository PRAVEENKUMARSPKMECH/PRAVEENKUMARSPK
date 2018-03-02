#include<stdio.h>
#include<conio.h>

void main()
{
   int n,i,s=1;clrscr();
   printf("ENTER TWO NUMBERS ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       s=s*2;
       if(s==n)
       {
       printf("\n yes");
       
       break;}
   }
   if(s!=n)
     printf("\n no");
     getch();
}
