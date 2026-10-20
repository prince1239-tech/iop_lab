#include<stdio.h>
int main() {
	int s1,s2,s3,s4,s5,total,pr;
	printf("enter marks of s1,s2,s3,s4,s5 : \n");
	scanf("%d%d%d%d%d", &s1 , &s2 , &s3, &s4 , &s5);
	total=s1+s2+s3+s4+s5;
	printf("total is : %d\n" , total);
	printf("percentage is : %d" , total/5);
	return 0;
	
}
