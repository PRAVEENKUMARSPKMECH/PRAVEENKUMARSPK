#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
int a,b;long int c;
clrscr();
printf("\n Enter number and its power = ");
scanf("%d%d",&a,&b);
c=pow(a,b);
printf("\n THE VALUE OF %d^%d=%ld ",a,b,c);

getch();
}
