#include<stdio.h>
#include<conio.h>
void main() 
{
   int a[1000],n,j,i,l;clrscr();
   
   printf("\nENTER THE SIZE OF THE ARRAY");
   scanf("%d",&n);
      printf("\nENTER THE ELEMENTS OF THE ARRAY");
      for(i=0;i<n;i++)
      {
         scanf("%d",&a[i]); 
      }
   for(i=0;i<n;i++)
   {
          for(j=1+i;j<n;j++)
          {
       if(a[j]<a[i])
       {
       l=a[i];
       a[i]=a[j];
       a[j]=l;
       }
          }
   }
    printf("\nTHE SORTED ARRAY :\n");
     for(i=0;i<n;i++)
      {
    printf("\n%d",a[i]); 
      }
    
    getch();
}
