#include <stdio.h>
#include <math.h>
int main()
{
	int number,ld,fd,counter = 0,temp,a;
	printf("enter number");
	scanf("%d" ,&number);
	temp = number;
	ld = number % 10;
	while(number >= 10)
	{
	number = number / 10;
	fd = number; 
	counter++;
	} a = pow(10,counter);
	temp = temp - (fd * a) - ld;
	temp = temp + (ld * a) + fd;
	printf("%d" ,temp);
	return 0;
}
	
