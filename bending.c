




#include<stdio.h>
//#include<conio.h>
void main() 
{
   char a[1000];n,i,l;//clrscr();
   
   printf("\nENTER THE SIZE OF THE ARRAY");
   scanf("%d",&n);
      printf("\nENTER THE ELEMENTS OF THE ARRAY");
      for(i=0;i<n;i++)
      {
         scanf("%d",&a[i]); 
      }
   for(i=1;i<n;i++)
   {
       if(a[i]!={'a','A','b','B','c','C','d','D','e','E','f','F','g','G','H','h','i','I','j','J','K','k',})
       l=a[i];
   }
    printf("\nENTER THE MINIMUM VALUE IN THE ARRAY = %d",l);
   // getch();
}
