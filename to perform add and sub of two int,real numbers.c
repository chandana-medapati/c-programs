/*write a c program to perform addition and subtraction of
two integer numbers and two real numbers*/
#include <stdio.h>
int main()
{
	int num1,num2,add,sub;
	float n1,n2,sum,diff;
	printf ("enter any two integer numbers");
	scanf("%d%d",&num1,&num2);
	add=num1+num2;
	diff=num1-num2;
	printf("addition of two integer numbers are %d\n",add);
	printf("subtraction of two integer numbers are %d\n",diff);
	printf("\n enter any two real numbers");
	scanf("%f%f",&n1,&n2);
	sum=n1+n2;
	diff=n1-n2;
	printf("add of two real numbers are %f\n",sum);
	printf("subtract of two real numbers are %f",sub);
}