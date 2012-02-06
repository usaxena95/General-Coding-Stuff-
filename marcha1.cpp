#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>

using namespace std;


int main()
{
	int t;
	//t=1;
	scanf("%d",&t);
	flag:
	while(t)
	{
		int non,ask;
		scanf("%d %d",&non,&ask);
		//printf("%d",non);
		int a[non];
		int i;
		for(i=0;i<non;i++)
		{
		//	a[i]=1;
			scanf("%d",&a[i]);			
			 
		}

		int b[non];
	
		int p;
                for(p=0;p<non;p++)
                {
                       b[p]=0;
                }

		for(i=1;i<=pow(2,(non));i++)
		{
        		int num=i;
        		for(p=0;p<non;p++)
        		{
				//int num=i;
        			b[p]=num%2;
        			num=(num>>1);
                		if(num<1)
                		{
                        	break;
                		}
        		}
			int sum=0;
			int j;
			for(j=0;j<non;j++)
			{
				sum=sum+a[j]*b[j];
			}
		
			if(sum==ask)
			{
				printf("Yes\n");
				t--;
				goto flag;
			}
		}
		
		t--;
	printf("No\n");
	}
	return 0;
}


