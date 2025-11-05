/*write a c program to find the area of the circle*/
#include<stdio.h>
// # define pi=3.14
int main()
{
	const float pi=3.14;
	float r,a;
	printf("enter radius of the circle");
	scanf ("%f",&r);
	a=pi*r*r;
	printf ("area of the circle=%2f\n",a);
	return 0;
}
	