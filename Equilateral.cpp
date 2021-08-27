#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,A;
	printf("Enter the side a: ");
	scanf("%f",&a);
	A = (sqrt(3)/4)*a*a;
	printf("Area of an Equilateral Triangle = %f", A);
	return 0;
}
