#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<algorithm>


using namespace std;

string a;
size_t pos;
string b ("A");
string c ("C");
string d ("E");
string e ("K");
string f ("R");
string g ("U");
string h ("P");
string i ("H");

int main()
{
	int t,n;
	scanf("%d\n",&t);
	for(n=1;n<=t;n++)
	{
	int min=1000000;
	int j;
	int count[10];
	for(j=0;j<10;j++)
	{
		count[j]=0;
	}
	getline(cin,a);
	for(pos=0;pos<a.length();pos++)
	{
		if(a.substr(pos,1)==b)
		{
			count[0]++;
		}
		else if(a.substr(pos,1)==c)
		{
			count[1]++;
		}
		else if(a.substr(pos,1)==d)
		{
			count[2]++;
		}
		else if(a.substr(pos,1)==e)
		{
			count[3]++;
		}
		else if(a.substr(pos,1)==f)
		{
			count[4]++;
		}
		else if(a.substr(pos,1)==g)
		{
			count[5]++;
		}
		else if(a.substr(pos,1)==h)
		{
			count[6]++;
		}
		else if(a.substr(pos,1)==i)
		{
			count[7]++;
		}
		else
		{
			continue;
		}
	}
	count[1]/=2;
	for(j=0;j<8;j++)
	{
		if(count[j]<min)
		{
			min=count[j];
		}
	}
	printf("Case #%d: %d\n",n,min);
	}
	return 0;
}
