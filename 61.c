#include <stdio.h>
#include <string.h>
int main() 
{
	char str[20];
	int x,i;
	printf("enter the string and the k value\n ");
	scanf("%s %d",str,&x);
	for(i=0;i<x;i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}
