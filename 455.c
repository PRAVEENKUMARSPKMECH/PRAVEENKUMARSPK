#include <stdio.h>
#include <conio.h>
void main()
{
int n,r,s=0;clrscr();
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
    r=n/10;
    n=n/10;
    s++;
}
printf("\n %d",s);


getch();
}
