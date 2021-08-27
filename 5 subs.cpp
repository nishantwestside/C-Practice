#include<stdio.h>
#include<conio.h>
int main()
{
	int maths,physics,chemistry,english,computer;
	float sum, average, percentage;
	printf("enter marks of maths: ");
	scanf("%d",&maths);
	printf("enter marks of physics: ");
	scanf("%d",&physics);
	printf("enter marks of chemistry: ");
	scanf("%d",&chemistry);
	printf("enter marks of english: ");
	scanf("%d",&english);
	printf("enter marks of computer: ");
	scanf("%d",&computer);
	sum = (maths+physics+chemistry+english+computer);
	average = (sum)/5;
	percentage = ((sum)/500)*100;
	printf(" sum = %f, average = %f, percentage = %f ", sum, average, percentage);
	return 0;
}
