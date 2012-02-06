#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

using namespace std;

char a[1000000];
int main()
{
	int i;
	scanf("%s",a);
	int len = strlen(a);
	long long int ans =0;
	int count=0;
	int f;
	for(i=len - 1;i >= 0 ; i--)
	{
		 f=a[i]-'0';
		 if(f%8==0)
		 {
			 ans++;
		 }
		 if(i < len -1)
		 {
			int succ = a[i+1] - '0';
			int f1 = succ + 10 * f;
			if(f1 % 8==0 && f1 >8)
			{
				ans++;	
			}
			if( i <len -2)
			{
				int succsucc = a[i+2] -'0';
				int f2 = 100 *f + 10 * succ +  succsucc;
				if(f2 %8 ==0 )
				{
					count++;
				}
			}
		 }
	if( a[i]!= '0')
		 		{
			 	ans= ans+count;
		 		}

				
	}
	printf("%lld",ans);
	return 0;
}


