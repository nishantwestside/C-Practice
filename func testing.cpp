#include<stdio.h>
int add(int a,int b)
{
	int sum;
	printf("enter numbers to add: ");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("%d",sum);
}
int main()
{
	int c,d;
	add(c,d);
	return 0;
}
