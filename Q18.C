#include<stdio.h>
int main()
{ int a ;
printf("ENTER PERCENTAGE:");
scanf("%d", &a );
if (a>=90 && a<=100)
{ printf("GRADE A");}
 else if (a>=80 && a<=89)
{ printf("GRADE B");}
else if (a>=70 && a<=79)
{ printf("GRADE C");}
else if (a>=60 && a<=69)
{ printf("GRADE D");}
else 
{ printf("GRADE F"); }
return 0;


}