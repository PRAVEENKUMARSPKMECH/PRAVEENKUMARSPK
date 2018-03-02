#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
 char a[10];clrscr();
  int i,l;
   printf("ENTER THE NUMBER\n ");
   scanf("%s",a);
      l=strlen(a);
   for(i=0;i<l;i++)
   {

     printf("%c\t",a[i]);
   }
   getch();
}

