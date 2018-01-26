#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
int n,s=0,r;
clrscr();
printf("\n ENTER n");
scanf("%d",&n);
int t=n;
while(n>0)
{
    r=n%10;
    s=(s*10)+r;
    n=n/10;}
if(s==t)
printf("\n the given num %d is a palindrome",t);
else
printf("\n the given num %d is not a palindrome",t);
getch();
}
