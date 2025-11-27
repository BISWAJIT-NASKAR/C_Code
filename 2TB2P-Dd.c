#include<stdio.h>
int main(){
	int x ;
	float X ;
	x = 2 ;
	X = x * x * x * 12 / 4 * x + x * x * 8 / 4 * x + x / 8 * x + 8 / 8 * x ;
	printf("%.2f", X);
	return 0;
}
