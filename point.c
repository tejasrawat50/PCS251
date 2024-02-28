#include<stdio.h>
int main()
{
int n,*pn;
float r,*pr;
double d,*pd;
char c,*pc;
printf("Enter a character \n");
scanf("%c",&c);
printf("Enter a number in integer \n");
scanf("%d",&n);
printf("Enter a number in float \n");
scanf("%f",&r);
printf("Enter a number in double \n");
scanf("%lf",&d);
pc=&c;
pn=&n;
pr=&r;
pd=&d;
printf("Address of character pointer \n");
printf("%u \n",pc);
printf("Address of interger pointer \n");
printf("%u \n",pn);
printf("Address of float pointer \n");
printf("%u \n",pr);
printf("Address of double pointer \n");
printf("%u \n",pd);
printf("Value of character pointer \n");
printf("%c \n",*pc);
printf("Value of interger pointer \n");
printf("%d \n",*pn);
printf("Value of float pointer \n");
printf("%f \n",*pr);
printf("Value of double pointer \n");
printf("%lf \n",*pd);
return 0;
}

