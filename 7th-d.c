# include<stdio.h>
 main()
 {
 	int m=5;
 	int n,n1;
 	n=++m;
 	printf("%d \n",n);
 	n1=m++;
 	printf("%d \n",n1);
 	n--;
 	printf("%d \n",n);
 	--n1;
 	printf("%d \n",n1);
 	n-=n1;
 	printf("%d \n",n);
 	return 0;
 }
