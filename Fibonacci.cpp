#include<stdio.h>

int main()
{
	long int a = 0;
	long int e = 1;
	long int b = 1;
	int n, c = 1;
	printf("Enter the number of terms you want in the Fibonacci series ");
	scanf("%d", &n);
	do
	{
		printf("%d\n", b);
		b = e+a;
		a=e;
		e=b;
		c=c+1;
	}
	while(n>=c);
	return 0;
}
