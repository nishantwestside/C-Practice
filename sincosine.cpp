/*program to print a table of values for sine and cosine between (0, 1)*/
#include<stdio.h>
#include<math.h>
int function(void)
{
double x;
int i;
printf("value x\t\tSine\t\tCosine\n");
for(i = 0; i <=10; i++)
{
 x = i/10.0;
 printf("%lf\t%lf\t%lf\n", x,sin(x),cos(x));
}

return 0;
}
int main(void)
{
    function();
}
