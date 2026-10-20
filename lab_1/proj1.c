#include<stdio.h>
int main() {
    float p,r,t,si;
    printf("enter the value of p,r,t : \n");
    scanf("%f%f%f " , &p, &r, &t);
    si=p*r*t*0.01 ;
    printf("value of si : %f" , si);
    return 0;
}


