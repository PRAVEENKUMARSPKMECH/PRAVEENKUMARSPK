#include<stdio.h>
#include<conio.h>
void main()
{
 int A[20];
  int i,N,K,sum=0;clrscr();
printf("Enter size of the array < 20 \n");
scanf("%d",&N);
printf("Enter K VALUES TO SUM \n");
scanf("%d",&K);
printf("Enter the elements in the array \n");
 for(i=0;i<N;i++)
{
scanf("%d",&A[i]);
}
for(i=0;i<K;i++)
{
sum=sum+A[i];
        
}
printf("SUM OF FIRST K NUMBERS = %d",sum);
getch();
}
