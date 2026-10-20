#include<stdio.h>
int main()
{
	int hours,min,sec,seconds;
	printf("enter the time in hours,minutes and second format :");
	scanf("%d%d%d", &hours,&min,&sec);
	seconds = hours*3600 + min*60 + sec ;
	printf("time in total second is : %d" , seconds);
}
