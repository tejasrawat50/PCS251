#include<stdio.h>
#include<string.h>
int pal(char[],int);
int eql(char[],char[]);
int main()
{
int s,l,j,z,c,w,i;
char str[20],rev[20],out[40];
printf("Enter the string \n");
fgets(str, 20, stdin);
printf("Enter the second string \n");
fgets(rev, 20, stdin);
l=strlen(str);
j=strlen(rev);
l=l-1;
j=j-1;
s=pal(str,l);
z=pal(rev,j);
w=eql(str,rev);
if(s==0 && z==0)
{
printf("String are palindrome \n");
c=0;
for(i=0;i<l;i++)
{
out[c]=str[i];
c++;
}
for(i=0;i<j;i++)
{
out[c]=rev[i];
c++;
}
printf("Merged String of palindrome strings \n");
puts(out);
}
else if(w==0)
{
printf("Strings are equal \n");
c=0;
for(i=0;i<l;i++)
{
out[c]=str[i];
c++;
}
for(i=0;i<j;i++)
{
out[c]=rev[i];
c++;
}
printf("Merged String of Equal strings \n");
puts(out);
}
else
{
printf("Can not merged the strings \n");
}
return 0; 
}
int pal(char str[],int l)
{
int c=0,i,d=0;
char out[20];
for(i=l-1;i>=0;i--)
{
out[c]=str[i];
c++;
}
for(i=0;i<=l;i++)
{
if(str[i]!=out[i])
d=1;
break;
}
return d;
}
int eql(char str[],char rev[])
{
int l,d,i,q=0;
l=strlen(str);
d=strlen(rev);
l=l-1;
d=d-1;
if(l==d)
{
for(i=0;i<=l;i++)
{
if(str[i]!=rev[i])
q=1;
break;
}
return q;
}
else 
{
printf("strings are not equal \n");
q=1;
return q; 
}
}
