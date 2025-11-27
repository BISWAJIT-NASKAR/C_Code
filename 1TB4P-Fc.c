#include<stdio.h>
int main(){
	int Ban, Eng, Math, His, Geo, Sag;
	float Per ;
	printf("Enter the subject of Bengali number\n");
	scanf ("%d", &Ban);
	if(Ban<=100){	
        printf("The subject of Bengali number is = %d\n", Ban);
    }
    else
        printf("The subject of Bengali number is not exist.\n", Ban = 0);
    
    printf("Enter the subject of English number\n");
	scanf ("%d", &Eng);
    if(Eng <=100){
    	printf("The subject of English number is = %d\n", Eng);
    }
    else
        printf("The subject of English number is not exist.\n", Eng = 0);
        
	printf("Enter the subject of Mathematics number\n");
	scanf ("%d", &Math);
	if(Math <=100){
	    printf("The subject of Mathematics number is = %d\n", Math);
    }
	else
        printf("The subject of Mathematics number is not exist.\n", Math = 0);
        
	printf("Enter the subject of History number\n");
	scanf ("%d", &His);
    if(His <=100){
	    printf("The subject of History number is = %d\n", His);
    }
    else
        printf("The subject of History number is not exist.\n", His = 0);
        
	printf("Enter the subject of Geography number\n");
	scanf ("%d", &Geo);
	if(Geo <=100){
	printf("The subject of Geography number is = %d\n", Geo);
    }
    else
        printf("The subject of Geography number is not exist.\n", Geo = 0);
        
    Sag = Ban + Eng + Math + His + Geo ;
    printf("The student saggregate marks is = %d\n", Sag);
    
    Per = Sag*100/500;
    printf("The student percentage marks is = %.2f\n", Per);
}
