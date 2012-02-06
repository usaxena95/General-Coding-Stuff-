#include<iostream>
#include<cstdlib>
#include<cstdio>


using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t)
	{
		int nop;
		scanf("%d",&nop);
		int a[nop];
		int i;
		for(i=0;i<nop;i++)
		{
			scanf("%d",&a[i]);
		int p;
		int num=a[i];
		int b[nop][10];
		int j;
		for(j=0;j<nop;j++)
		{
	
		for(p=0;p<10;p++)
		{
			while(num)
			{
                     		b[j][p]=num%2;
                        	num=(num>>1);
				printf("%d",b[j][p]);
                		      
       	        	}
		}
		
		}
		printf("\n");
		}
	t--;
	}
	return 0;
}

\\identify the kernel of the game and apply the given constrainds on it.
