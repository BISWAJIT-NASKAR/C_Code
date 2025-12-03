#include<stdio.h>
int main(){
    int a,b,c;
    float d;
    printf("Enter the value of a = \n");
    scanf("%d",&a);
    printf("Enter the value of b = \n");
    scanf("%d",&b);
    printf("Enter the value of c = \n");
    scanf("%d",&c);
    d = (a+b+c)/3;
    if(d>=40 || a>=33 || b>=33 || c>=33){
	printf("Your total percentage is %.2f and you are pass", d);
	}
	else{
		printf("Your total percentage is %.2f and you are fail", d);
	}
    return 0;
}
