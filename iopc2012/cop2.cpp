#include<stdio.h>
#include<list>
#include<queue>
#include<vector>
using namespace std;
int i,n,s,j,k,i1,i2,t;
queue<int> mylist1;
vector<int>mylist2;
int a[1012][1012],ans[1012],v[1012];
int main ()
{
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&s);
		if(s==0)
		{
			printf("1\n");
			continue;
		}
		for(j=0;j<n;j++)
		{
			v[j]=0;
			ans[j]=0;	
			for(k=0;k<n;k++)
			{
				a[j][k]=0;
			}
			
		}
		mylist2.clear();
		for(j=0;j<s;j++)
		{
			scanf("%d %d",&i1,&i2);
			a[i1][i2]=1;
			v[i2]++;
		}

		for(j=0;j<n;j++)
		{
			if(v[j]==0)
			{
				mylist1.push(j);
			}
		}
		while(!mylist1.empty())
		{
			int t=mylist1.front();
			mylist2.push_back(t);
			mylist1.pop();
			for(j=0;j<n;j++)
			{
				if(a[t][j]==1)
				{
					v[j]--;
					if(v[j]==0)
					{
						mylist1.push(j);
					}
				}
			}
		}
	
		/*
		while(!mylist2.empty())
		{
			cout<<mylist2.front()<<endl;
			mylist2.pop();
		}
		*/
		for(k=0;k<mylist2.size();k++)	
		{

			for(j=0;j<n;j++)
			{	
				if( a[mylist2[k]][j]==1 && ans[j]<ans[mylist2[k]]+1)
				{
					
					ans[j]=ans[mylist2[k]]+1;
					
				}
			}
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

