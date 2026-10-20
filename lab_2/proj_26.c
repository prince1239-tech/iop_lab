#include<stdio.h>
main()
{
	int i,N,sum_odd=0,sum_even=0,sum;
	printf("enter the value N\n");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		if(i%2!=0)	
		sum_odd=sum_odd+i;
	}
	printf("sum off all odd integer between 1 to N is : %d\n",sum_odd);
	for(i=0;i<=N;i++)
	{
		if(i%2==0)	
		sum_even=sum_even+i;
	}
	printf("sum off all even integer between 1 to N is : %d",sum_even);
}
