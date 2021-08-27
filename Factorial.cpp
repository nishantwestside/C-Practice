#include<stdio.h>
#include<conio.h>
int main()
{
	int n,fac,i;
	fac=1;
	printf("Enter the value of n : \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("The factorial of %d is %d", n, fac);
	getch();
}
