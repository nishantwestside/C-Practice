#include<stdio.h>
#include<conio.h>
int main( )
{        
	int i=1, j=1, k=1;
	while(i<=3)
	{    
		while(j<=3)
		i++;
		{
		 	while(k<=3)
		 	j++;
		 	{
		 		printf("%d%d%d\n",i,j,k);
		 		k++;
		 	}
		}
	}    
	return 0;
}        
