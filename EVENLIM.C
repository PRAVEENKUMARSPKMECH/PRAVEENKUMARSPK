#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b,i;clrscr();
 
   printf("ENTER THE LIMITS ");
   scanf("%d%d",&a,&b);
      printf("THE EVEN NUMBERS BETWEEN %d AND %d :",a,b);
   for(i=a;i<=b;i++)
{
    if(i%2==0)
    {
     printf("\n %d",i);   
    }
}
getch();
}
