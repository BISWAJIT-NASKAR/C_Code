#include<stdio.h>
main(){
	int x,y;
	printf("Enter the value of x and y \n");
	scanf("%d \n %d",&x,&y);
	if(x>y)
		printf("Print the value of x= %d",x);
	else
		printf("Print the value of y= %d",y);
  return 0;
}
