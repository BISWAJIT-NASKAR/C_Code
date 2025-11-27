#include<stdio.h>
int main(){
	int len, bre, red;      /* where length , breadth and redius must be integer */
    float rac_area, rac_per, cir_area, cir_cir;
    printf("Enter the rectangle length\n");
    scanf("%d", &len);
    printf("The recrangle lengrh is = %d\n", len);
    
    printf("Enter the rectangle breadth\n");
    scanf("%d", &bre);
    printf("The recrangle breadth is = %d\n", bre);
    
    printf("Enter the circle radius\n");
    scanf("%d", &red);
    printf("The circle radius is = %d\n", red);
    
    rac_area = len * bre;
    printf("The area of the circle is = %.2f\n", rac_area);
    
    rac_per = 2 * (len + bre);
    printf("The perimeter of the recrangle is = %.2f\n", rac_per);
    
    cir_area = 3.14 * red * red;
    printf("The area of the circle is = %.2f\n", cir_area);
    
    cir_cir = 2 * 3.14 * red;
    printf("The circumference of the circle is = %.2f", cir_cir);
    
    return 0;
}
