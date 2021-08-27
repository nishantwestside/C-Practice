#include<iostream>
using namespace std;
int main(void)
{
	int n,i,fact;
	fact=1;
	cout<<"Enter the value of n: \n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"The factorial is: "<< fact;
	return 0;
}
