
#include <stdio.h>
#include <conio.h>
void main()
{
char a[20],b[50];clrscr();
int i;
printf("\nEnter string1");
scanf("%s",a);
printf("\nEnter string2");scanf("%s",b);
i=0;
while(a[i]==b[i]&&a[i]!='\0')
i++;
if (a[i]>b[i])
printf("\n%s",a);
else if(a[i]<b[i])
{
printf("\n%s",b);
}
else
{
printf("\nstring is %s",a);
}
getch();
}
