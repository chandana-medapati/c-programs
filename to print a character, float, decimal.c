/*write a c program to print a character, a decimal, and a float*/
#include<stdio.h>
int main()
{
	char ch;
	int num;
	float f;
	printf ("enter any character ");
	scanf("%c",&ch);
	printf ("enter any integer value");
	scanf("%d",&num);
	printf ("enter any decimal value");
	scanf("%f",&f);
	printf("character is %c\n,integer value is %d\n,float value is %f\n",ch,num,f);
	
}