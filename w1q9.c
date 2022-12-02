#include <stdio.h>
int main()
{
	int lownumber,highnumber;
	printf("enter lownumber");
	scanf("%d" ,&lownumber);
	printf("enter highnumber");
	scanf("%d" ,&highnumber);
	while (lownumber <= highnumber)
	{printf("%d" ,lownumber);
	lownumber++;
	}
	return 0;
}
