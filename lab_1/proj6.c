#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a,b");
	scanf("%d%d" , &a, &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swap value of a and b is : %d and %d" , a , b);
}
