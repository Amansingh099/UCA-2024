#include<stdio.h>
#include"calculator.h"
int main()
{
	int a = 6, b = 3;
	printf("Add : %f\n", add(a, b));
	printf("Subt : %f\n", subtract(a, b));
	printf("Multi : %f\n", multiply(a, b));
	printf("Div : %0.2f\n", divide(a, b));
	return 0;
}
