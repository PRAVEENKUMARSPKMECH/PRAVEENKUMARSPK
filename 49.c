#include<stdio.h>
#include<conio.h>
void main()
{
    int l,i,a[10];clrscr();
    printf("\n ENTER 10 NUMBERS ONE BY ONE");
   for(i=0;i<10;i++)
   {
    scanf("%d",&a[i]);
   }
    l=a[0];
    for(i=1;i<10;i++)
    {
       
        if(a[i]>l)
        l=a[i];
        
    }
     printf("\n THE BIGGEST AMONG THEASE 10 NUMBERS = %d",l);
getch();
}

