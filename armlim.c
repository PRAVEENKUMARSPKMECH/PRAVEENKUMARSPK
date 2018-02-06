 #include<stdio.h>
  #include<conio.h>
void main()
{
    int num,r,sum,temp,a,b;clrscr();
    printf("\nENTER THE LIMITS");
    scanf("%d%d",&a,&b);

    for(num=a;num<=b;num++)
    {
         temp=num;
         sum = 0;

         while(temp>0)
         {
             r=temp%10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("\n%d ",num);
    }

  
getch();
}
