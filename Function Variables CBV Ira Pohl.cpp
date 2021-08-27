#include<stdio.h>
int compute_sum_to_n(int n)
{
	int sum=0;
	for(;n>0;n--)
	sum+=n;
	printf("sum=%d",sum);
	return sum;
}
int main()
{
	int m=5;
	compute_sum_to_n(m);
	return 0;
}
