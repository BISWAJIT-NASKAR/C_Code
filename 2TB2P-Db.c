#include<stdio.h>
int main(){
	int c , d , g , v;
	float R;
	c = 3 ;
	d = 4 ;
	g = 5 ;
	v = 7 ;
	R = 2 * v + 6.22 * (c + d)/ g + v;
	printf("%.2f", R); 
	return 0;
}
