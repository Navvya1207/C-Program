/* WAP to perform the following operations and print the results
1) a*b*c
2) a+b+c
3)a-b-c
4) (a+b)*c
5) a/b
take a and b as user input */
#include <stdio.h>
int main(){
	int a, b,c,op1,op2,op3,op4,op5;    
	printf("Enter a");
	scanf("%d", &a);
	printf("Enter b");
	scanf("%d",&b);
	printf("Enter c");
	scanf("%d",&c);
	op1=a*b*c;
	op2=a+b+c;
	op3=a-b-c;
	op4=(a+b)*c;
	op5=a/b;
	printf("\n	a*b*c = %d",op1);
	printf("\n	a+b+c = %d",op2);
	printf("\n	a-b-c = %d",op3);
	printf("\n	(a+b)*c = %d",op4);
	printf("\n	a/b = %d", op5);
	return 0;
}
