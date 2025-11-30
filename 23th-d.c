#include<stdio.h>
int main()
{
	int i=1;
	do
	{
	   printf("%d \n",i);
	   i=i+1;
	   if(i=9)
	   {	
	      continue;
       }
	}
	while(i<=10);
	return 0;
}
