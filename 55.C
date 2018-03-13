#include<stdio.h>

int main()
{
   int x,y,z;
  
   printf("ENTER 2 NUMBER");
   scanf("\n %d%d",&x,&y);
   z=x*y;
   if(z%2==0)
    printf("\n EVEN");
    else
     printf("\nODD");
     return 0;
   
}
