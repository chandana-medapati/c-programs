/*write a c program to find the average of five subjects marks*/
#include<stdio.h>
int main()
{
	int n1,n2,n3,n4,n5;
	float avg;
	printf ("enter five subjects marks");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	avg=(n1+n2+n3+n4+n5)/5.0;
	printf("\n the average is %f",avg);
}