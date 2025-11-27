#include<stdio.h>
int main()
{
    int a , b ;
    float c;
    c= 3.14;
    printf("Enter the volume of radius a =\n");
    scanf("%d", &a);
    printf("Enter the volume of hight b =\n");
    scanf("%d", &b);
    printf("The area of the cylender is = %.2f", a*b*b*c);
    return 0;
}