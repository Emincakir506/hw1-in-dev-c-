#include <stdio.h>
int main()
{
	int factorial = 1,number,counter = 1;
	printf("enter number");
	scanf("%d" ,&number);
	while (counter <= number)
	{ factorial = factorial * counter;
	counter++;
	}
	printf(" factorial : %d" ,factorial);
	return 0;
}
