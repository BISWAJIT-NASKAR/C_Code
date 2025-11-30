#include<stdio.h>
main(){
	int x,y,max;
	printf("Enter value of x and y");
	scanf("%d %d",&x,&y);
	max=x>y?x:y;
	printf("larger of %d and %d is %d",x,y,max);
	return 0;
}
