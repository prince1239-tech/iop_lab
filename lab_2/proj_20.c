#include<stdio.h>
int main()
{
	float x, y;
	int command;
	printf("enter value of x and y\n");
	scanf("%f%f", &x , &y);
	printf("give command for addition = 1 , subtraction = 2 , multiplication = 3 and division = 4\n");
	scanf("%d" , &command);
	switch(command){
	case 1 : printf("%f" , x+y);
	break;
	case 2 : printf("%f" , x-y);
	break;
	case 3 : printf("%f" ,x*y);
	break;
	case 4 : if(y==0)
	{
		printf("error");
	}
	else{
		printf("%f" , x/y);
	} break;
	default: printf("invalid input");
}
}
