#include<stdio.h>
int main()
{
	int i,x=1,fac;
	printf("enter the number for which you want factorial\n");
	scanf("%d",&fac);
	for(i=1;i<=fac;i++)
	{
		x=x*i;
	}
	printf("factorial of number is = %d",x);
}
