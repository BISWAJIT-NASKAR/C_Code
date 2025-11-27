#include<stdio.h>
int main(){
	int a , b , c , x , y ;
	float A ;
	a = 2 ;
	b = 3 ;
	c = 3 ;
	x = 3 ;
	y = 2 ;
	A = b * 7.7 * (x * y + a) / c - 0.8 + 2 * b / (x + a) * (1 + y);
	printf("%.2f", A);
	return 0;
}
