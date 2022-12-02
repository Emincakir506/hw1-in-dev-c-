#include <stdio.h>
#include <math.h>
int main()
{
	double number,counter = 2,s;
	printf("enter number");
	scanf("%lf" ,&number);
	while (counter <= number)
	{
		s += 1 / counter;
		counter = counter + 2;
	}
	printf("s : %lf " ,s);
	return 0;
}
