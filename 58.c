#include <stdio.h>

int main()
{
	int A,B;
	printf("\nENTER TWO NUMBERS TO SWAP");
	scanf("%d%d",&A,&B);
	A=A^B;
	B=A^B;
	A=A^B;
	printf("\n%d\t%d",A,B);
	return 0;
}
