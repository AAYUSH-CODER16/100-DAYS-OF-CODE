#include<stdio.h>
int main(){
int profit,loss,percentage,cp,sp;
scanf("%d %d",&cp,&sp);
if(sp>cp)
{ profit = sp-cp;
percentage = (profit*100)/cp;
printf("profit %d%%",percentage);}
else if (sp<cp)
{ loss= cp-sp;
percentage = (loss*100)/cp;
printf(" loss %d%%",percentage);}
else
{printf("NO PROFIT NO LOSS");}
return 0;
}