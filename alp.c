#include<stdio.h>
#include<conio.h>
void main()
{
 char x;clrscr();
 printf("\n ENTER A LETTER");
 scanf("%c",&x);
 if((x<='z'&&x>='a')||(x>='A'&&x<='Z'))
 printf("\n IT IS AN ALPHABET");
 else
 printf("\n IT IS NOT AN ALPHABET");
 getch();
 }
