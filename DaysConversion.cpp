#include<stdio.h>
#include<conio.h>
int main()
{
	int years,weeks,days;
	printf("Enter days\n");
	scanf("%d",&days);
	years=days/365;
	weeks=(days)/7;
	printf("years:%d	Weeks:%d", years,weeks);
	return 0;
}
