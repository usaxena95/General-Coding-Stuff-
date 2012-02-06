#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<list>
#include<math.h>
#include<algorithm>
#include<queue>
using namespace std;
int i,n,s,j,k,i1,i2,t;
list<int> mylist1,mylist2;
list<int> ::iterator it,it2;
int a[1011][1011],b[1011][1011],ans[1011],v[1011];
int main ()
{
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&s);
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				a[j][k]=0;
				b[j][k]=0;
			}
		}
		for(j=0;j<n;j++)
		{
			v[j]=0;
			ans[j]=0;
		}
		for(j=0;j<s;j++)
		{
			scanf("%d %d",&i1,&i2);
			a[i1][i2]=1;
			b[i1][i2]=1;
			v[i2]++;
		}

		for(j=0;j<n;j++)
		{
			if(v[j]==0)
			{
				mylist1.push_back(j);
			
			}
		}
		while(!mylist1.empty())
		{
			mylist2.push_front(mylist1.front());
			mylist1.pop_front();
			for(j=0;j<n;j++)
			{
				if(a[mylist2.front()][j]==1)
				{
					a[mylist2.front()][j]=0;
					v[j]--;
					if(v[j]==0)
					{
						mylist1.push_back(j);
					}
				}
			}
		}
		mylist2.reverse();
	/*	
		while(!mylist2.empty())
		{
			cout<<mylist2.front()<<endl;
			mylist2.pop_front();
		}
		*/
		while(!mylist2.empty())
		{
			for(j=0;j<n;j++)
			{	
				if(b[mylist2.front()][j]==1 && ans[j]<=ans[mylist2.front()]+1)
				{
					
					ans[j]=ans[mylist2.front()]+1;
					
				}
			}
			mylist2.pop_front();
		}
		int max=0;
		for(j=0;j<n;j++)
		{
			if(ans[j]>max)
			{
				max=ans[j];
			}
		}
		printf("%d\n", max+1);
		
	}
	return 0;
}

