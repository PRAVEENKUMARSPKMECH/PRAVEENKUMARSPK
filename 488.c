#include<stdio.h>
#include<conio.h>
void main()
{
   int n,a[100],v,i,s=0;clrscr();
   printf("ENTER THE NUMBER OF ELEMENTS ");
   scanf("%d",&n);
   printf("\nENTER THE ELEMENTS ");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
  
    for(i=0;i<n;i++)
   {
       s=s+a[i];
   }

   v=s/n;
    printf("\naverage = %d",v);
    getch();
}
