#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("Enter the year to check: ");
	scanf("%d",&year);
	if ((year%4==0&&year%100!=0)||(year%400==0))
	{
		printf("The year is leap");
	}
	else
	{
		printf("The year isn't leap");
	}
	return 0;
}
