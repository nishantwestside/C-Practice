#include<stdio.h>  
#include<conio.h>
int main()  
{   
    int i,j,k;
	i=1; 
	j=1;
	k=1;  
    while(i<3)
    {
    	printf("%d%d%d\n",i,j,k);
    	i++;
	}
	while(j<3)
	{
		printf("%d%d%d\n",i,j,k);
		j++;
	}
	while(k<3)
	{
		printf("%d%d%d\n",i,j,k);
		k++;
	}
	return 0;
}
