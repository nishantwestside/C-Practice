#include<stdio.h>
#include<conio.h>
int fact(int);
main()
{
	int no,ans;
	printf("Enter a number: \n");
	scanf("%d",&no);
	ans=fact(no);
	printf("Factorial is %d",ans);
	getch();
}
int fact(int x)
{
	int f;
	if(x==0)
	{
		return 1;
	}
	else
	{
		f=x*fact(x-1);
		return f;
	}
}
