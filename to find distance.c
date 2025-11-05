/*write a c program to find the distance travelled by an object */
#include <stdio.h>
int main()
{
	float dist,vel,acc,time;
	printf("enter velocity,accleration,and time");
	scanf("%f%f%f",&vel,&acc,&time);
	dist=(vel*time)+(acc*time*time)/2.0;
	printf("\n distance travelled is %f",dist);
}