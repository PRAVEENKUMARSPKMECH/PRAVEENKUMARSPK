#include <stdio.h>
#include<string.h>
int main()

{

	char a[10];
	scanf("%s",a);
	int i,f=0,x;
	x=strlen(a);
	for(i=0;i<x;i++)
	{
	if(a[i]=='1' || a[i]=='0')

		{

			f=1;

		}
	else
	{
	  	f=0;  
	}

	}
	if(f==1)

	{

		printf("yes");

	}
	else
	{
	  	printf("no");  
	}

	

}
