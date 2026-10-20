#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b,c");
	scanf("%d%d%d" ,&a , &b,&c);
	if(a>b && a>c)
	printf("a is greatest");
	else if(b>c && b>a)
	printf("b is greatest");
	else
	printf("c is greatest");
}
