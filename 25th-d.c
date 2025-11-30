#include<stdio.h>
int main()
{
	int a=10,b=20;
	{
		int a=15,c=18;
		printf(" %d \n %d \n %d \n ", a,b,c);
		printf("First output \n");
		{
			int b=25, d=30;
			printf(" %d \n %d \n %d \n %d \n",a,b,c,d);
			printf(" Second output \n");
		}
	    printf(" %d \n %d \n %d \n",a,b,c);	
	    printf(" Third output \n");
	}
	printf(" %d \n %d \n",a,b);
	printf(" Forth output \n");
	return 0;
}
