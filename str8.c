#include<stdio.h>
#include<string.h>
int main()
{
int i,l;
char str[20];
printf("Enter the string \n");
fgets(str, 20, stdin);
l=strlen(str);
l=l-1;
printf("String in lower Case \n");
for(i=0;i<l;i++)
{
if(str[i]>=65&&str[i]<=90)
{
str[i]=str[i]+32;
}
}
puts(str);
printf("String in upper Case \n");
for(i=0;i<l;i++)
{
if(str[i]>=97&&str[i]<=122)
{
str[i]=str[i]-32;
}
}
puts(str);
}
