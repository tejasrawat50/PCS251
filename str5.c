#include<stdio.h>
#include<string.h>
int main()
{
int l,c=0,i,d=0,x=0;
char str[20],rev[20],out[40];
printf("Enter the string \n");
fgets(str, 20, stdin);
printf("Enter the second string \n");
fgets(rev, 20, stdin);
l=strlen(str);
d=strlen(rev);
l=l-1;
d=d-1;
for(i=0;i<l;i++)
{
out[c]=str[i];
c++;
}
for(i=0;i<d;i++)
{
out[c]=rev[i];
c++;
}
printf("Merged String \n");
puts(out);
return 0; 
}
