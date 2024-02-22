#include<stdio.h>
int main()
{
int a[5][5],i,j,m,n,t,k,x;
printf("Enter the row and column \n");
scanf("%d%d",&m,&n);
printf("Enter the elements in the array \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
for(k=0;k<m;k++)
{
for(x=0;x<n;x++)
{
if(a[i][j]>a[k][x])
{
t=a[i][j];
a[i][j]=a[k][x];
a[k][x]=t;
}
}
}
}
}
printf("Array in Descending order \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
return 0;
}

