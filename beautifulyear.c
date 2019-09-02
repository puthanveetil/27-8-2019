#include <stdio.h>
int main()
{
int a,j,k,g,e;
scanf("%d",&a);
for(a=a+1;;a++)
{
j=a%10;
k=(a/10)%10;
g=(a/100)%10;
e=a/1000;
if(j!=k && k!=g && g!=e && j!=g && j!=e && k!=e)
{ 
break;
}
}
printf("%d ",a); 
}
