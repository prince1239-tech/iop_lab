#include<stdio.h>
int main()
{
	char ch;
	printf("enter something");
	scanf("%c" , &ch );
	if(ch>='A' && ch<='Z')
	printf("you entered a capital letter");
	else if(ch>='a' && ch<='z')
	printf("you entered a small letter");
	else if(ch>='1' && ch<='10')
	printf("you entered a digit");
	else
	printf("you entered a special symbol");
}
