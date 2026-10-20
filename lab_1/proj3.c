#include<stdio.h>
int main()
{
	int previous_salary,after_salary;
	printf("enter the previous salary and the after salary \n");
	scanf("%d%d" , &previous_salary , &after_salary);
	printf("the gross salary is %d" , after_salary-previous_salary);
}
