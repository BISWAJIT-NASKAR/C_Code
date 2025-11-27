#include<stdio.h>
int main(){
	int x,y;
	float a,b,c,d,e,f,g,h;
	x = 1189;
	y = 841;
	a = x/2;
	b = a/2;
	c = b/2;
	d = c/2;
	e = y/2;
	f = e/2;
	g = f/2;
	h = g/2;
	printf("The A0 paper size is A0 = %dmm X %dmm\n", x,y);
	printf("The A1 paper size is A1 = %dmm X %.0fmm\n", y,a);
	printf("The A2 paper size is A2 = %.0fmm X %.0fmm\n", a,e);
	printf("The A3 paper size is A3 = %.0fmm X %.0fmm\n", e,b);
	printf("The A4 paper size is A4 = %.0fmm X %.0fmm\n", b,f);
	printf("The A5 paper size is A5 = %.0fmm X %.0fmm\n", f,c);
	printf("The A6 paper size is A6 = %.0fmm X %.0fmm\n", c,g);
	printf("The A7 paper size is A7 = %.0fmm X %.0fmm\n", g,d);
	printf("The A8 paper size is A8 = %.0fmm X %.0fmm", d,h);
	return 0;
}
