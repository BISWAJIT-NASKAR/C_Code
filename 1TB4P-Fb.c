#include<stdio.h>
int main(){
  int d;
  float m , f, i, c;
  printf("Enter the distance between two cities \n");
  scanf ("%d", &d);
  printf("The distance between two cities for unite kilometers is %d \n", d);
  m = 1000*d ; // 1 kilomiters = 1000 meters
  printf("This is the meter unite distance %.2f \n", m);
  f = 1000*3.2808*d; // 1 meter = 3.2808 feet
  printf("This is the feet unite distance %.2f \n", f);
  i = 1000*39.37*d; // 1 meter = 39.37 inches
  printf("This is the inches unite distance %.2f \n", i);
  c = 1000*100*d; // 1 meter = 100 centimeters
  printf("This is the centimeters unite distance %.2f \n", c);
}
