#include<stdio.h>
int main()
{
	float x, y;
	char command;
	printf("enter value of x and y\n");
	scanf("%f%f",&x,&y);
	printf("write character for addition = + , subtraction = - , multiplication = * and division = / \n");
	scanf(" %c",&command);
	switch(command)
	{
	case '+' : printf("%f" , x+y);
	break;
	case '-' : printf("%f" , x-y);
	break;
	case '*' : printf("%f" , x*y);
	break;
	case '/' : if(y==0)
	{
		printf("error");
	}
	else{
		printf("%f" , x/y);
	} break;
	default: printf("invalid input");
    }
	
	
}
