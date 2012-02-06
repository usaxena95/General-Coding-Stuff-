#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	itr2:
	while(t)
	{
		int a,b;
		scanf("%d",&a);
		scanf("%d",&b);
		itr:
		if(b==0)
		{
			printf("%d\n",a);
			t--;
			goto itr2;
		}
		else
		{
			int c=a;
			a=b;
			b=c%b;
			goto itr;
		}

		//t--;
	}
	return 0;
}
