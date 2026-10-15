#include <stdio.h>
int main(){
int day;
printf("Enter month number: ");
scanf("%d", &day);
switch(day)
{
case 1:
printf("JANUARY,31DAYS");
break;
case 2:
printf("FEBURARY,28DAYS");
 break;
case 3:
printf("MARCH,31DAYS");
break;
case 4:
printf("APRIL,30DAYS");
break;
 case 5:
printf("MAY,31DAYS");
break;
 case 6:
 printf("JUNE,30DAYS");
 break;
case 7:
printf("JULY,31DAYS");
break;
case 8:
printf("AUGUST,31DAYS");
case 9:
printf("SEPTEMBER,30DAYS");
case 10:
printf("october,31DAYS");
case 11:
printf("NOVEMBER,30DAYS");
case 12:
printf("DECEMBER,31DAYS");
 default:
printf("Invalid day number");
}
 return 0;
}