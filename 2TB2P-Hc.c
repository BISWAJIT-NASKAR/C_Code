#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c, s, area;
	printf("Enter the length of the triangle side as a\n");
	scanf("%f",&a);
	printf("The length of the triangle side as a is = %.1f\n", a);
	printf("Enter the length of the triangle side as b\n");
	scanf("%f",&b);
	printf("The length of the triangle side as b is = %.1f\n", b);
	printf("Enter the length of the triangle side as c\n");
	scanf("%f",&c);
	printf("The length of the triangle side as c is = %.1f\n", c);
	if(a+b<c||b+c<a||c+a<b){
		printf("Invalide input ! Enter the valide length of the triangle.");
		return 0;
	}
	s = (a + b + c)/2;
	area = sqrt(s*(s - a) * (s - b) * (s - c));
	printf("The area of the triangle is = %.2f", area);
	return 0;
}
