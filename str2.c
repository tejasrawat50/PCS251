#include<stdio.h>
int main()
{
int l=0,i=0;
char str[20];
printf("Enter the string \n");
fgets(str, 20, stdin);
while(str[i]!='\0')
{
l=l+1;
i=i+1;
}
l=l-1;
printf("length of string is \n");
printf("%d \n",l);
return 0; 
}
