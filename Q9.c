#include <stdio.h>
#include <math.h>
int main()
{ float principal,rate,time,simpleinterest,compoundinterest,amount;
printf("principal:");
scanf("%f", &principal);
printf("rate :");
scanf("%f", &rate);
printf("time(years):");
scanf("%f", &time);
simpleinterest=(principal*rate*time)/100;
printf("the simple interest is = %f\n",simpleinterest);
amount = principal*pow((1+rate/100),time);
compoundinterest= amount-principal;
printf("the compound interest is = %f",compoundinterest);
return 0;

}