



#include<stdio.h>

#include<conio.h>

void main()
 
{
   int a[1000],m,n,j,i,k,l;clrscr();
 
  
   printf("\nENTER THE TIME IN hr and MINUTES");
   
scanf("%d%d",&n,&k);
  
 printf("\nENTER THE TIME IN hr and MINUTES");

   scanf("%d%d",&m,&l);
   
   j=n-m;
   if(j<0)
   j=(-1*j);
      i=k-l;
      if(i<0)
   i=(-1*i);

    
 
    {
     printf("\n THE TIME IS %d hour and %d minutes",j,i); 
      }
      

        

    
    getch();
}






