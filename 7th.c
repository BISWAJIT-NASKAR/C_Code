#include<stdio.h>
int main()
{
	int p , t, r;
    printf("Enter the value of principal = \n");
    scanf("%d" , &p);
    printf("Enter the time duration = \n", t);
    scanf("%d" , &t);
    printf("Enter the rate of interest = \n", r);
    scanf("%d" , &r);
    float d ;
    d = p*t*r/100;
    printf("The interest is %.2f", d);
    return 0;
}

