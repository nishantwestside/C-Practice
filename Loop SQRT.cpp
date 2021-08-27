#include<stdio.h>
#include<conio.h>
int main()
{
	int n,p;
	float i;
	printf("enter the no: \n");
	scanf("%d",&n);
	i=1;
	p=0.00001;
	while(i*i<n)
	{
		i++;
		i=i+p;
	}
	printf("The square root of %d is %f", n,i);
	getch();
}
