#include<stdio.h>
int main(){
	int fer;
	float a , b , cen ;
	printf("Enter the city temperature in fahrenheit degree scale\n");
	scanf("%d", & fer);
	printf("The city temperature in fahrenheit degree scale is = %d\n", fer);
	a = 5*fer/9;
	b = 5*32/9;
	cen = a - b;
	printf("The city temperature in centigrade degree scale is = %.2f", cen);
	return 0;
}
