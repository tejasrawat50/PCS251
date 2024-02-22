#include<stdio.h>
#include<string.h>
void merge(char[],char);
int main()
{
int i,l;
char str[20],key;
printf("Enter a string \n");
fgets(str, 20, stdin);
printf("Enter the key \n");
scanf("%c",&key);
merge(str,key);
return 0;
}
void merge(char str[], char k)
{
int c=0,i,l,d=0;
l=strlen(str);
l=l-1;
for(i=0;i<l;i++)
{
if(str[i]==k)
{
d=1;
break;
}
else
d=0;
}
if(d==1)
printf("Key founded \n");
else
printf("Key was not founded \n");
}
