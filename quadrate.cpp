#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
	
	string i;
	getline(cin,i);
	size_t	pos1= i.find("x*x");
	size_t pos2= i.find("");
	string a=i.substr(0,pos1-1);
	string b=i.substr(pos);
	cout<<a<<endl;
	cout<<pos1<<endl;
	cout<<b<<endl;
	return 0;
}
