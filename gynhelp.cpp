#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int i,t,m,l;
scanf("%d",&t);
while(t--)
{
scanf("%d %s",&m,a);
getchar();
m--;
l=strlen(a);
for(i=m;i<l;i++)
{
a[i]=a[i+1];
}
printf("%s\n",a);
}
return 0;
}
