#include <stdio.h>
int main()
{
	int number,counter = 1,sum = 0;
	printf("enter number");
	scanf("%d" ,&number);
	while (counter <= 10)
	{ printf("%d" ,number);
	 sum = sum + number;
	counter++;
	printf("enter number");
	scanf("%d" ,&number);
	}
	printf(" sum : %d" ,sum);
	return 0;
}
