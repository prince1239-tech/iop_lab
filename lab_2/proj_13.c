#include<stdio.h>
int main()
{
	int num;
	printf("enter a number : ");
	scanf("%d" , &num);
	if(num%2 == 0 && num!=0)
	printf("number is even");
	else if (num%2 != 0)
	printf("number is odd");
	else
	printf("entered number is zero");
}
