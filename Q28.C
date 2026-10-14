#include<stdio.h>
int main(){
int i,n, product = 1;
printf("ENTER A NUMBER:");
scanf("%d",&n);
for(i=2;i<=2*n-1;i+=2)
product = product*i;
i++;
printf("%d",product);
return 0;
}