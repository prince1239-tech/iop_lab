#include<stdio.h>
int main()
{
	int second,hour,min,sec;
	printf("enter time in seconds : ");
	scanf("%d" , &second);
	hour= second/3600;
	printf("hour : %d \n" , hour);
	min= second/60 - hour*60 ;
	printf("min : %d \n" , min);
	sec= second - min*60 - hour*60*60 ;
	printf("second : %d" , sec);	
}
