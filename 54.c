#include<stdio.h>

int main()
{
   int x;
  
   printf("ENTER A NUMBER");
   scanf("\n %d",&x);
   if(x%2==0)
    printf("\n%d",x);
    else
     printf("\n%d",x-1);
     return 0;
   
}
