#include<stdio.h>

int main() 
{
   int i,n,x[10];
  
   printf("\nENETR 10 NUMBERS");
   
   for(i=0;i<10;i++)
   {
     scanf("%d",&x[i]);

   }
   
   n=x[0];
   
    for(i=1;i<10;i++)
   {
      if(n<x[i])
      {
          n=x[i];
      }
      
   }

    printf("\nTHE MAXIMUM AMONG THEASE 10 NUMBERS IS = %d ",n);
    
}
