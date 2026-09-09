#include<stdio.h>
int main()
{ char character ;
printf("enter character:");
scanf("%c", &character );
if (character>='a' && character<='z')
{ printf("The character is in lowercase");}
 else if (character>='A' && character<='Z')
{ printf("The character is in uppercase");}
else 
{ printf("The character is special character"); }
return 0;


}