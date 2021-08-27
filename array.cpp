#include<stdio.h>
#include<conio.h>
int main(void)
{
	int a[10];
	int n,i;
	printf("Enter the no. of elements in the array: \n");
	scanf("%d",&n);
	printf("Enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		printf("%d",a[i]);
	}
	getch();
}
