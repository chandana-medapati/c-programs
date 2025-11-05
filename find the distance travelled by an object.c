/*write a c program to find the distance travelled by an object*/
#include<stdio.h>
int main()
{
	int dist,vel,acc,time;
	printf("enter velocity,accelerationand time");
	scanf("%d%d%d,&vel,&acc,&time");
	dist=(vel*time)+(acc*time*time)/2.0;
	printf("\n distance travelled is %d%d",dist);
}