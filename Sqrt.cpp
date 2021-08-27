#include<stdio.h>
#include<conio.h>
int main()
{
	float n, p, i;
	printf("Enter the no : \n");
	scanf("%f",&n);
	i=n/2;
	p=0;
	while(i!=p)
	{
		p=i;
		i=(n/p+p)/2;
	}
	printf("The Square root of %f is %f",n,i);
	getch();
}
