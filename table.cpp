#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int max(int*,int );
int main()
{
	int nob,sfo,tab;
	scanf("%d %d %d",&nob,&sfo,&tab);
	int a[nob],i,mult=sfo*tab;
	for(i=0;i<nob;i++)
	{
		scanf("%d",&a[i]);
	}
	int count=0;
	while(mult>0)
	{
		mult-=max(a,nob);
		count++;
	}
	printf("%d",count);
	return 0;
}

int max(int *a,int len)
{
	int *ptr;
	int max=0;
	int *flag;
	for(ptr=a;ptr<a+len;ptr++)
	{
		if(*ptr>max)
		{
			max=*ptr;
			flag=ptr;
		}
	}
	*flag=0;
	return max;
}
	
