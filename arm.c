#include<stdio.h>
#include<conio.h>

void main()
{
    int n,s=0,r,t;
    clrscr();
    printf("Enter a three digit number");
    scanf("%d",&n);
    t=n;

   while(n>0)
   {
       
     r=n%10;
     s=s+(r*r*r);
     n=n/10;
   }
       
       
 if(s==t)
            printf("\n %d is an armstrong number",t);
            else
              printf("\n %d is not an armstrong number",t);

getch();
}
