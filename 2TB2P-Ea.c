#include<stdio.h>
int main(){
	int i, j, k, l;
	float a, b;
	i = 2 ;
	j = 3 ;
	k = i / j * j ;
	l = j / i * i ;
	a = i / j * j ;
	b = j / i * i ;
	printf("%d\n", k);
	printf("%d\n", l);
	printf("%.2f\n", a);
	printf("%.2f\n", b);
	return 0;
}
