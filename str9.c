#include<stdio.h>
#include<string.h>
void merge(char[],char[]);
int main()
{
int i,l;
char str1[20],str2[20];
printf("Enter two string \n");
fgets(str1, 20, stdin);
fgets(str2, 20, stdin);
merge(str1,str2);
return 0;
}
void merge(char str1[], char str2[])
{
int c=0,i,j,l1,l2;
char str3[40];
l1=strlen(str1);
l2=strlen(str2);
l1=l1-1;
l2=l2-1;
for(i=0;i<l1;i++)
{
str3[c]=str1[i];
c++;
}
for(j=0;j<l2;j++)
{
str3[c]=str2[j];
c++;
}
str3[c]='\0';
printf("Merged string \n");
puts(str3);
}
