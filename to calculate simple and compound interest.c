/*write a c program to calculate simple interest and compound intrest*/
#include<stdio.h>
#include<math.h>
int main ()
{
	float p,t,r,si,ci;
	printf("enter principle amount");
	scanf("%f",&p);
	printf("\n enter time");
	scanf("%f",&t);
	printf("\n enter rate of interest");
	scanf("%f",&r);
	si=(p*t*r)/100.0;
	ci=p*pow((1+r/100),t)-p;
	printf("\n the simple interest is %f",si);
	printf("\n the compound interest is%f",ci);
}