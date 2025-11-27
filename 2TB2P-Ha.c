#include <stdio.h>
int main(){
	int num, dig, sum = 0;
	printf("Enter the five digit number: ");
	scanf("%d", &num);
	if(num < 10000 || num > 99999){
		printf("Invalide input ! please enter the five-digit number.\n");
		return 0;
    }
	while(num > 0){
			dig = num % 10;
			sum += dig;
		    num /= 10;
		}
	printf("The sum of the digit is: %d", sum);
	return 0;
}	
