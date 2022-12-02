#include <stdio.h>
int main()
{
	float number,square;
	printf("enter number");
	scanf("%f" ,&number);
	float counter = 1;
	while (counter <=10)
	{
	square = number * number;
	printf("%f" ,square);
	counter++;
	scanf("%f" ,&number);
	} 
	return 0;
}
