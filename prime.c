#include<stdio.h> 
#include<conio.h>
void main() 
{
  int n,i,s=0,t;clrscr();
  printf(" Enter a number \n ");
  scanf("%d",&n);
  t=n;
for(i=1;i<=n;i++) 
{
      if(n%i==0) 
      {
        s++;
      }
  }

  if(s==2)
  {
  printf("\n %d is a Prime number",t);
  }
  else
  {
  printf("%d is not a Prime number",t);
  }
  getch();    
}
