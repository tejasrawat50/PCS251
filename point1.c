#include<stdio.h>
int main()
{
int n,*pn,m,*pm,*t;
printf("Enter a number in integer \n");
scanf("%d",&n);
printf("Enter a number in integer \n");
scanf("%d",&m);
pm=&m;
pn=&n;
printf("Address of interger pointer \n");
printf("%u \n",pn);
printf("Address of interger pointer \n");
printf("%u \n",pm);
printf("value of interger pointer \n");
printf("%d \n",*pn);
printf("value of interger pointer \n");
printf("%d \n",*pm);
t=pm;
pm=pn;
pn=t;
printf("Swapped values \n");
printf("Address of interger pointer \n");
printf("%u \n",pn);
printf("Address of interger pointer \n");
printf("%u \n",pm);
printf("value of interger pointer \n");
printf("%d \n",*pn);
printf("value of interger pointer \n");
printf("%d \n",*pm);
return 0;
}

