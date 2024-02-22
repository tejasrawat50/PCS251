#include<stdio.h>
#include<string.h>
int main()
{
int l;
char str[20];
printf("Enter the string \n");
fgets(str, 20, stdin);
l=strlen(str);
l=l-1;
printf("length of string is \n");
printf("%d \n",l);
return 0; 
}
