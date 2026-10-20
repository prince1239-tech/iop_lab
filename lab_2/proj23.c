#include<stdio.h>
int main()
{
	float base,power,i,multiplier;
	printf("enter the value of base and the power");
	scanf("%f%f",&base,&power);
	multiplier=1;
	if(base!=0 && power>0)
	{
	for(i=1;i<=power;i++)
	{
		multiplier=multiplier*base;
	}
	printf("%f",multiplier);
	}	
	else if(base!=0 && power<0){
	{
		for(i=1;i<=(-power);i++)
		multiplier=multiplier/base;
		printf("%f",multiplier);
	}
	}
	else
	printf("%f",multiplier);
}

