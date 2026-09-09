#include<stdio.h>
int main()
{ int a,b,c ;
printf("number 1:");
scanf("%d", &a );
printf("number 2:");
scanf("%d", &b );
printf("number 3:");
scanf("%d", &c );
if (a>=b && a>=c)
{ printf("The number 1 is largest");}
 else if (b>=a && b>=c)
{ printf("The number 2 is largest");}
else 
{ printf("The number 3 is largest"); }
return 0;


}