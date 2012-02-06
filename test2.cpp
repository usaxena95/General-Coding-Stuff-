#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;

int main()
{
	int c;
	string n;
	getline(cin,n);
	if(n=="")
	{
		return 0;
	}
	c=atoi(n.c_str());
	cout<<c;
	getline(cin,n);
	c=atoi(n.c_str());
	cout<<c;

	return 0;
}
