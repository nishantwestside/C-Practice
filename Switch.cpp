#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a, b and c\n");
	scanf("%d %d %d", &a,&b,&c);
	switch(a>b,a>c,b>c)
	{
		case 1:
			printf("\na is greater than b and c");
			break;
		case 2:
			printf("\nc is greater than a and b");
			break;
		default:
			printf("\nb is greater than a and c");
			break;
	}
    getch();
}
