#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter a");
	scanf("%d" ,&a);
	printf("enter b");
	scanf("%d" ,&b);
	printf("enter c");
	scanf("%d" ,&c);
	if (a > b  && a > c)
	printf("a" ,a);
	else 
	if (b > a && b > c)
	printf("%d" ,b);
	else
	if (c > a && c > b)
	printf("%d" ,c);
	return 0; 
}
