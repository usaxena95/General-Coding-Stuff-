#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>


using namespace std;

typedef struct cons cons;
struct cons
{
	int a;
	char c;
};
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	cons c1[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&(c1[i].a));
		if(i==0)
		{
			c1[i].c='0';
		}
		else
		{
			c1[i].c='L';
		}
	}
	int j;
	int ans=0;
	for(i=1;i<n;i++)
	{
		if(c1[i].c=='L')
		{
			int count=1;
			int diff = c1[i].a -c1[0].a;
			for(j=i+1;j<n;j++)
			{
				if(c1[j].a == (c1[i].a + count*diff))
				{
					c1[j].c='R';
					count++;
				}
			}
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
					
}	




