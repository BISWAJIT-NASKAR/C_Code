#include<stdio.h>
int main()
{
	int p,t;
	float r,z;
    printf("Enter the value of p,t,r\n");
	scanf("%d %d %f",&p,&t,&r);
	z=p*t*r/100;
	printf("The simple interest is %.2f\n",z);
	return 0;
}
