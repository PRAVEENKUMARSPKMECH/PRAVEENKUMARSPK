#include<stdio.h>
#include<conio.h>

void main()
{
    int low,high,i,s;
    clrscr();
    printf("Enter the limits: ");
    scanf("%d%d",&low,&high);

    printf("Prime numbers between %d and %d are: ",low,high);

    while(low<high)
    {
        s=0;

        for(i=2;i<=low/2;++i)
        {
            if(low%i==0)
            {
                s=1;
            }
        }

        if(s==0)
            printf("\n %d",low);

        ++low;
    }

getch();
}
