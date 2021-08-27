#include<stdio.h>
#include<math.h>
int main()
{
	double sine,x;
	printf("Enter the sine value of x: ");
	scanf("%lf",&x);
	sine=sin(x);
	printf("The sine value of %lf=%lf",x,sine);
	return 0;
}
