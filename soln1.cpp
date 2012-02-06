#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

int main()
{
int t,n,i,j,count;
scanf("%d",&t);
while(t)
{
	scanf("%d",&n);
	count=0;
	for(i=1;i<=n;i++)
	{
	scanf("%d",&j);
		if(i==j)
		{	 
			count++;
		}
	}	
	if(count%2==0) 
	{
		printf("BOB\n");
	}
	else 
	{
		printf("ALICE\n");
	}
t--;
}
return 0;
}

