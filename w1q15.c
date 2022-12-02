#include <stdio.h>
int main()
{
	int number;
	printf("enter number");
	scanf("%d" ,&number);
	while (number >= 1)
	{printf("%d" ,number);
	number--;
	}
	return 0;
}
