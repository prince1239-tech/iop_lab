#include<stdio.h>
int main()
{
	char ch;
	printf("enter character\n");
	scanf("%c" , &ch);
	if(ch>='a' && ch<='z')
	printf("you have entered a small letter");
	else
	printf("it is not a small letter");
}
