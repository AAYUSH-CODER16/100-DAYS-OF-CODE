#include<stdio.h>
int main()
{
float circumference,area,radius;
printf("radius of circle is:");
scanf("%f",&radius);
circumference = 3.14*2*radius;
area = 3.14*radius*radius;
printf("circumference=%f\n",circumference);
printf("area=%f\n",area);
return 0;
}


