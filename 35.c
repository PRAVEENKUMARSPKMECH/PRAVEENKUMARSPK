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
   if(n%2!=0)
   {
   
   m=a[n/2];
   }
   
    printf("\nTHE SORTED ARRAY :\n");
     for(i=0;i<n;i++)
      {
    printf("\n%d",a[i]); 
      }
        printf("\n THE MEDIAN OF THE ARRAY =%d : ",m);
    
    getch();
}

