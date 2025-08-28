#include <stdio.h>
#include <math.h>
int main(){
float p,r,t,CI,calc;
printf("Enter p, r,t");
scanf("%f %f %f",&p,&r,&t);
calc=r/100;
CI = p * pow((1 + r / 100.0),t) - p;
printf("Compound Interest= %.2f",CI);
return 0;
}
// 5000 7 3
