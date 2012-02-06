#include<iostream>
#include<string>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	string a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	a+=b;
//	cout << c<<endl<<a<<endl;
	sort(a.begin(),a.end());
	sort(c.begin(),c.end());
//	cout << c<<endl<<a<<endl;
	if(a.compare(c)==0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}
	
