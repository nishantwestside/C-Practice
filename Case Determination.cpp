#include<stdio.h>
#include<conio.h>
int main()
{
	char a;
	printf("Enter the type of a: ");
	scanf("%c", &a);
	if(a>=65 && a<=90)
	{
		printf(" a is Capital");
	}
	else if(a>=97 && a<=122)
	{
		printf("a is small case");
	}
	else if(a>=48 && a<=57)
	{
		printf("a is numeric digit");
	}
	else
	{
		printf("a is special character");
	}
	return 0;
}
