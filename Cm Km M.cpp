#include<stdio.h>
#include<conio.h>
int main()
{
	float cm, m, km;
	printf("Enter length in cm.: ");
	scanf("%f", &cm);
	m = cm/100;
	km = m/1000;
	printf("Kilometers = %f Meters = %f",km,m);
	return 0;
}
