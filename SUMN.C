#include<stdio.h>
#include<conio.h>
void main()
{
int N,A,SUM=0;clrsr();
printf("ENTER N VALUE\n");
scanf("%d",&N);
for(A=1;A<=N;A++)
{
SUM=SUM+A;}
printf("SUM OF %d numbers is = %d",N,SUM);
getch();
}
