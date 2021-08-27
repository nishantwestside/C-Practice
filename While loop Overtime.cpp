#include<stdio.h>
#include<conio.h>
int main()
{
	int i, time_worked, overtime, overtime_pay=0;
	i=1;
	while(i<=10)
	{
	printf("\nEnter the time employees worked (in hour): ");
	scanf("%d", &time_worked);
	i++;
    if(time_worked>40)
    {
    	overtime=time_worked-40;
    	overtime_pay=overtime_pay+12*overtime;
	}
    }
	printf("The overtime pay for employees are = %d",overtime_pay);
	return 0;
}
