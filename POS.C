#include<stdio.h>
#include<conio.h>
void main()
{
int n;clrscr();
printf("\n ENTER THE VALUE OF n");
scanf("%d",&n);
if(n>0)
printf("\n IT IS POSITIVE");
else if(n<0)
printf("\n IT IS NEGATIVE");
else
printf("\n IT IS ZERO");
getch();
}
