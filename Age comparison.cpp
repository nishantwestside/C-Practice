#include<stdio.h>
#include<conio.h>
int main()
{
	int ram,shyam,ajay;
	printf("Enter the ages of ram, shyam and ajay:\n");
	scanf("%d %d %d",&ram,&shyam,&ajay);
	if(ram>shyam && shyam>ajay)
	{
		printf("ajay is younger");
	}
	else if(ram>ajay && ajay>shyam)
	{
		printf("shyam is younger");
	}
	else
	{
		printf("ram is younger");
	}
	return 0;
}
