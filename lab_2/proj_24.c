#include<stdio.h>
int main()
{
	float x,n,y;
	printf("enter the value of x and n\n");
	scanf("%f%f",&x,&n);
	if(n==1)
	{
		y=1+x;
		printf("value of y is: %f",y);
	}
	else if(n==2)
	{
		y=1+(x*0.5);
		printf("value of y is: %f",y);
	}
	else if(n==3)
	{
		y=1+(x*x*x);
		printf("value of y is: %f",y);
	}
	else
	{
		y=1+(n*x);
		printf("value of y is :%f",y);
	}
}

