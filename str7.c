#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
printf("Enter the string \n");
fgets(str, 20, stdin);
printf("String in upper Case \n");
printf("%s",strupr(str));
printf("String in lower Case \n");
printf("%s",strlwr(str));
}
