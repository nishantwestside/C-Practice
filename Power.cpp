#include<stdio.h>
#include<conio.h>
int main()
{
	int base, exponent, result=1,i;
	printf("enter base: ");
	scanf("%d", &base);
	printf("enter exponent: ");
	scanf("%d", &exponent);
	i=1;
	while(i<=exponent)
	{
		result *= base;
		i++;
	}
	printf("%d^%d=%d", base,exponent,result);
	getch();	
}
