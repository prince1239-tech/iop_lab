#include<stdio.h>
int main()
{
	float m,p,c,e,cm;
	printf("enter the marks of mathematics,physics, chemistry and entrance examination");
	scanf("%f%f%f%f" , &m , &p , &c ,&e);
	cm = m/2 + c/2 + p/2 + e ;
	printf("the cutoff marks of student is : %f" , cm);
}
