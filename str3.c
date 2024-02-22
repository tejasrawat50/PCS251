#include<stdio.h>
#include<string.h>
int main()
{
int l,c=0;
char str[20];
printf("Enter the string \n");
fgets(str, 20, stdin);
l=strlen(str);
while(l!=0)
{
if(str[l]==' ')
c++;
l--;
}
c=c+1;
printf("Number of word in string are \n");
printf("%d \n",c);
return 0; 
}
