/*write a c program to perform bitwise operations*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter any two integer numbers");
	scanf("%d,%d",&a,&b);
	printf ("\n bitwise operation of %d&%d=%d",a,b,a&b);
	printf("\n bitwise operation of %d/%d=%d",a,b,a/b);
	printf ("\n bitwise operation of %d^%d=%d",a,b,a^b);
	printf("\n bitwise operation of %d<<%d=%d",a,b,a<<b);
	printf("\n bitwise operation of %d>>%d=%d",a,b,a>>b);
}