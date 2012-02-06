#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t)
	{
		int nop;
		scanf("%d",&nop);
		int i;
		int count=0;
		int a;
		for(i=0;i<nop;i++)
		{
			
			scanf("%d",&a);
		
		
			
			while(a>=i+1)
			{
				a=a-(i+1);
				count++;		


			}
		
		}
		if(count%2==0)
		{
			printf("BOB");
		}
		else
		{
			printf("ALICE");
		}
	t--;
	printf("\n");
	}
return 0;
}
