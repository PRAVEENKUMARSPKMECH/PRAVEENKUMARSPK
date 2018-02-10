#include<stdio.h>

#include<conio.h>

void main() 

{
   int a[1000],n,j,i,m,l;clrscr();

   
   printf("\nENTER THE SIZE OF THE ARRAY");

   scanf("%d",&n);
   
   printf("\nENTER THE ELEMENTS OF THE ARRAY");
   
   for(i=0;i<n;i++)
    
  {
         scanf("%d",&a[i]); 
      }
  

   
     for(i=0;i<n;i++) 
    
 {
     printf("\n THE ELEMENT= %d AND INDEX= %d",a[i],i); 
      }
   
   

        
    
    getch();
}
