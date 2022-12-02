#include<stdio.h>
int main()
{
	int number,digitnumber = 1;
	printf("enter number");
	scanf("%d" ,&number);
	while (number > 10)
	{
		number = number / 10;
		digitnumber++;
	}
	printf("digitnumber : %d" ,digitnumber);
	return 0;
}
