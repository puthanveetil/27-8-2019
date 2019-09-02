#include<stdio.h>
int main()
{
int k,n,w;
scanf("%d%d%d",&k,&n,&w);
int l=(w*(w+1)/2)*k-n;
if (l>0)
{
printf("%d ",l);
}
else 
{
printf("0");
}
return 0;
}