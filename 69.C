#include<stdio.h>
int main()
{

int n,m,x;
printf("\n ENTER 2 NUMBERS");
scanf("%d%d",&n,&m);
if(n<0)
n=-(n);
if(m<0)
m=-(m);
x=n-m;
if(x%2==0)
{
printf("\nEVEN");
}
else
{
printf("\n ODD");
return 0;

}}
