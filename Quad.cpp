#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,D,rp,ip,r1,r2;
	printf("Enter the value of a, b and c\n");
	scanf("%f %f %f", &a, &b, &c);
	D=(b*b)-4*a*c;
	printf("The Discriminant D=%f", D);
	if(D>=0)
	{
		r1=(-b+sqrt(D))/2*a;
		r2=(-b-sqrt(D))/2*a;
		printf("Roots r1=%f r2=%f");
	}
	else
	{
		rp=b/2*a;
	    ip=sqrt(-D)/2*a;
	    printf(" Real part=%f, Imaginary part=%f", (rp+(ip)),(rp-(ip)));
	}
	getch();
}
