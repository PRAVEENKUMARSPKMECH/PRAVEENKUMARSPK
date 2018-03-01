#include <stdio.h>
#include <conio.h>
void main()
{
int i,l,m,n[20];clrscr();
printf("enter 5 array numbers");
for(i=0;i<5;i++)
{
scanf("%d",&n[i]);
}
l=n[0];
for(i=1;i<5;i++)
{

if(n[i]>n[0])
l=n[i];

}

m=n[0];
for(i=0;i<5;i++)
{

if(n[i]<n[0])
m=n[i];

}
printf("\n%d %d",m,l);
getch();
}
