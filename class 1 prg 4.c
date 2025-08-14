#include <stdio.h>
int main(){
	float p,r,t,calc;
	printf("Enter p,r,t");
	scanf("%f %f %f",&p,&r,&t);
	calc=(p*r*t)/100;
	printf("Simple Interest = %f",calc);
	return 0;
}
