#include <stdio.h>
 
int main() 
{
	int n,t,sum=0;
	printf("Enter the number");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		t=n%10;
		sum=sum+t;
		n=n/10;
 
	}
	printf("\nTHE SUM OF THE DIGITS = %d",sum);
	return 0;
}
