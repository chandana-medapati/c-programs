/*write a c program to find the area of the square*/
#include<stdio.h>
int main()
{
	float side,area;
	printf("enter the side of the square");
	scanf("%f",&side);
	area=side*side;
	printf("area of the square=%2f\n",area);
	return 0;
}