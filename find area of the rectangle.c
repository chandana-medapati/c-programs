/*write a c program to find the area of the rectangle*/
#include<stdio.h>
int main()
{
	float length,breadth,area;
	printf("enter the length of the rectangle");
	scanf("%f",&length);
	printf("enter the breadth of the rectangle");
	scanf("%f",&breadth);
	area=length*breadth;
	printf("area of the rectangle=%2f\n",area);
	return 0;
}