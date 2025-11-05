/*write a c program to evaluate the following expression a/b*c-b+a*d/3*/
#include<stdio.h>
int main()
{
	int a,b,c,d,expression;
	printf("enter value of a");
	scanf("%d",&a);
	printf(" enter value of b");
	scanf("%d",&b);
	printf("enter value of c");
	scanf("%d",&c);
	printf("enter value of d");
	scanf("%d",&d);
	expression=a/b*c-b+a*d/3;
	printf("\n expression is %d",expression);
}