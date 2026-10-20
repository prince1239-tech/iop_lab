#include<stdio.h>
int main()
{
	int period=31558150,hour,min,days;
	printf("period of revolution in seconds : %d " ,period);
	days= period/86400 ;
	printf("day: %d" , days);	
	hour= period/3600 - days*24;
	printf("hour : %d \n" , hour);
	min= period/60 - hour*60 - days*24*60 ;
	printf("min : %d \n" , min);
}
