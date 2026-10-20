#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,total;
	printf("enter marks of five subjects \n");
	scanf("%d%d%d%d%d" , &s1, &s2, &s3 , &s4 , &s5);
	total = (s1+s2+s3+s4+s5)/5 ;
	if(total>=90 && total<=100)
	printf("grade A+");
	else if(total>=70 && total<=89)
	printf("grade A");
	else if(total>=50 && total<=69)
	printf("grade B");
	else if(total>=30 && total<=49)
	printf("grade C");
	else
	printf("FAILED");
}
