#include<stdio.h>
int main()
{
	int number,counter = 0,mult;
	printf("enter number");
	scanf("%d" ,&number);
	while (counter <=10)
	{
	mult = number * counter;
	printf("%d" ,mult);
	counter++;	
	}
	return 0;
}
