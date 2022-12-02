#include <stdio.h>
int main()
{
int lownumber,sum,highnumber;
printf("enter lownumber");
scanf("%d" ,&lownumber);
printf("enter highnumber");
scanf("%d" ,&highnumber);
while  (lownumber <= highnumber)
{
	sum = sum + lownumber;
	lownumber++;
}
printf("%d" ,sum);
return 0;
}
