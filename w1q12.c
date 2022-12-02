#include <stdio.h>
int main()
{
	int lownumber,highnumber,step;
	printf("enter lownumber");
	scanf("%d" ,&lownumber);
    printf("enter highnumber");
	scanf("%d" ,&highnumber);
	printf("enter step");
	scanf("%d" ,&step);
	while (lownumber < highnumber)
	{ lownumber = lownumber + step;
	printf("%d" ,lownumber);
	}
    
	return 0;
}
