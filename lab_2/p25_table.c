#include<stdio.h>
int main()
{
	int number,i,x;
	printf("enter a number for which you want to print table\n");
	scanf("%d",&number);
	for(i=1;i<=10;i++)
	{
		x=number*i;
		printf("%d\n",x);
	}
}
