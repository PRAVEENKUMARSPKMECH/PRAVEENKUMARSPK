#include<stdio.h>
#include<conio.h>
void main()
{
int i,b,ch,count=0;clrscr();
char a[1000];
printf("ENTER A SENTENCE:\n");
scanf("%[^\n]s",&a);
b=strlen(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
count=count+1;
ch=b-count;
}
}
printf("no. of letters without count space: %d",ch);
getch();
}
