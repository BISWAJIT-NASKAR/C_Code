#include<stdio.h>
int main()
{
	int c;
	float da, hra,s;
	printf("Enter the basic salary \n");
	scanf("%d",&c);
	printf("The basic salary is %d \n" , c);
	da = 40*c/100;
	printf("The dearness allowance is %.2f \n", da);
	hra = 20*c/100;
	printf("The house rent allowance is %.2f \n", hra);
	s = c+da+hra;
	printf("The basic salaey is %.2f", s);
	return 0;
}
