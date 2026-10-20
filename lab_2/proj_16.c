#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b and c");
	scanf("%d%d%d" , &a,&b,&c);
	if (a>b)
	{ if(a>c)
	printf("a is greatest number");
	}
	else if (b>c)
	{ if(b>a)
	printf("b is greatest number");
	}
	else
	printf("c is greatest");
}
