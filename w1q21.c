#include <stdio.h>
int main()
{
	int number,firstdigit,lastdigit;
	printf("enter number");
	scanf("%d" ,&number);
	lastdigit = number % 10;
	while (number >= 10)
	{number = number / 10;
	}
	printf("firstdigit : %d" ,number);
	printf("lastdigit : %d" ,lastdigit);
	return 0;
}
