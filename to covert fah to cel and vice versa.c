/*write a ca program to convert fahrenheit to celsius and vice versa*/
#include<stdio.h>
int main()
{
	float fah,cel;
	printf("enter fahrenheit");
	scanf("%f",&fah);
	cel=(fah-32.0)*(5.0/9.0);
	printf("fahrenheit to celsius is %f\n",cel);
	printf("\n enter celsius");
	scanf("%f",&cel);
	fah=cel*(9.0/5.0)+32.0;
	printf("celsius to fahrenheit is %f",fah);
	
}