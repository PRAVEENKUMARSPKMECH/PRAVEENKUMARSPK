#include<stdio.h>
int main()
{
    int z;
    printf("enter a number \n");
    scanf("%d",&z);
    while(z%10!=0)
    {
    z++;
    }
    printf("The nearest greater multiples of 10 is %d",z);
    return 0;
}
