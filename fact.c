 #include<stdio.h>
  #include<conio.h>
void main()
{
    int a,b,c=1;clrcr(); 
    printf("\nENTER THE NUMBER");
    scanf("%d",&a);

    for(b=1;b<=a;b++)
    {
  c=c*b;
    }

  printf("\nTHE NUMBER FACTORIAL VALUE OF %d = %d",a,c);
getch();
}
