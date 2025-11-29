#include<stdio.h>
int main()
{
    int a;
    float b ; 
    b = 3.14;
    printf("Enter the volume of radius a\n");
    scanf("%d", &a);
    printf("The area of the circle is %.2f", b*a*a);
    return 0;
}