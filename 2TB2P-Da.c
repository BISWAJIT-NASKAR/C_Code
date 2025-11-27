#include<stdio.h>
int main(){
	int x , y;
	float Z;
	x = 3;
	y = 5;
	Z = x * x * x * (x + 3)/(y + 5) * (y - 4);
	printf("%.2f", Z);
	return 0;
}
