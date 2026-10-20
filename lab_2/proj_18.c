#include<stdio.h>
int main()
{
	int x,y,z,max;
	printf("enter the value of x,y and z");
	scanf("%d%d%d" , &x, &y , &z);
	max = ( x>y && x>z ? x : (y>z ? y : z));
	printf("largest number is %d\n" , max);
}
