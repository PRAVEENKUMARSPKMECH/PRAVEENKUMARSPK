#include <stdio.h>
#include <conio.h>

void main()
{
int i,n,t1=0,t2=1,T;clrscr();
printf("Enter the number of terms: ");
scanf("%d",&n);
printf("Fibonacci Series: ");
for(i=1;i<=n;++i)
    {
        printf("%d",t1);
        T=t1+t2;
        t1=t2;
        t2=T;
    }
getch();
}
