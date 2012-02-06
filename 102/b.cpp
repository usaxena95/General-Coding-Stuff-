#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string>

using namespace std;


string final(string a)
{
	int i;
	for(i=1;i<(a.length()/3);i++)
	{
		if(i==1)
		{
			a.insert(a.end()-3*i,',');
		}
		else
		{
			a.insert(a.end()-3*i-1,',');
		}
	}
	return a;
}
	

int main()
{

	string a;
	cin>>a;
	int i;
	string::iterator it;
//	it=a.end();
//	size_t len = a.length();
	string snake = "$";
	string decimal = ".";
	string fbrac= "(";
	string bbrac=")";
	string comma=",";
	size_t pos1,pos2,len=a.length();
	pos1=a.find("-");
	pos2=a.find(".");
	if(pos2==string::npos)
	{
		a+=".00";
		pos2=a.find(".");
	}
	else if(len-pos2==2)
	{
		a+="0";
		pos2=a.find(".");
	}
	string mid= a.substr(pos2+1,2);

	if(pos1 == string::npos)
	{
		
		a=a.substr(0,pos2);	
		a=final(a);
		//		a.insert(a.end()-3,',');
		snake+=a;
		snake+=decimal;
		snake+=mid;
		cout<<snake<<endl;
				

	}
	else
	{
		a=a.substr(1,pos2-1);
		fbrac+=snake;
//		cout<<a;
//		a.insert(a.end()-3,',');
		a=final(a);
		fbrac+=a;
		fbrac+=decimal;
		fbrac+=mid;
		fbrac+=bbrac;
		cout<<fbrac<<endl;

	}


	return 0;
}
