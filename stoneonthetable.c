#include <stdio.h>
int main()
{
int c=0,i,n;
char a[n+1];
scanf("%d", &n);
scanf("%s", a);
for(i=1;i<n;++i)
if(a[i]==a[i-1]) c++;
 
printf("%d\n", c);
}