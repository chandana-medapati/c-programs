/*write a c program to find the area of the triangle*/
#include<stdio.h>
int main()
{
	float base,height,area;
	printf("enter base of the triangle");
	scanf("%f",&base);
	printf("enter height of the triangle");
	scanf("%f",&height);
	area=0.5*base*height;
	printf("area of the triangle=%2f\n",area);
	return 0;
}