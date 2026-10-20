#include<stdio.h>
int main()
{
   float tempf;
   printf("enter temperature in fehrenhit :");
   scanf("%f" , &tempf);
   printf("temperature in celsius is : %f" ,(tempf-32)*5/9);	
}
