#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>

using namespace std;

int t;
size_t found;
string input,output="";
int main()
{
	scanf("%d",&t);
	while(t--)
	{
	input="";
	getline(cin,input);
	found=input.rfind(" ");
	while(found!=string::npos)
	{
		output+=input.substr(found+1,input.length()-1);
		output+=" ";
		input=input.substr(0,found);
		found=input.find(" ");
	}
	output+=input.substr(0,found);
	cout<<output<<endl;
	}
	return 0;
}
