#include<stdio.h>
int main(){
	float a , b , c , y , s ;
	a = 2.2;
	b = 0.0;
	c = 4.1;
	y = 3.0;
	s = c + a * y * y / b ;
	printf("The value of s = %.0f", s);
	return 0;
}
