#include <stdio.h>
 
int main(void) 
{
int a,y;
printf("\n enter two numbers to swap:");
scanf("%d %d",&a,&y);
printf("\n before the swapping:");
printf("\nx=%d",a);
printf("\ny=%d",y);
a=a+y;
y=a-y;
a=a-y;
printf("\n after the swapping:");
printf("\nx=%d",a);
printf("\ny=%d",a);
return 0;
}
