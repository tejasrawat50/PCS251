#include<stdio.h>
#include<string.h>
int main()
{
int l,c=0,i,d=0;
char str[20],rev[20];
printf("Enter the string \n");
fgets(str, 20, stdin);
l=strlen(str);
l=l-1;
for(i=l-1;i>=0;i--)
{
rev[c]=str[i];
c++;
}
for(i=0;i<=l;i++)
{
if(str[i]!=rev[i])
d=1;
break;
}
printf("Reversed String \n");
puts(rev);
if(d==0)
printf("String is Palindrome \n");
else
printf("String is not Palindrome \n");
return 0; 
}
