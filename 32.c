#include<stdio.h>
#include<conio.h>
void main() 
{
   int a[1000],n,i,l;clrscr();
   
   printf("\nENTER THE SIZE OF THE ARRAY");
   scanf("%d",&n);
      printf("\nENTER THE ELEMENTS OF THE ARRAY");
      for(i=0;i<n;i++)
      {
         scanf("%d",&a[i]); 
      }
   l=a[0];
   for(i=1;i<n;i++)
   {
       if(l>a[i])
       l=a[i];
   }
    printf("\nENTER THE MINIMUM VALUE IN THE ARRAY = %d",l);
    getch();
}
