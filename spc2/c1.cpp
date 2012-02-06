#include <iostream>
#include <string>
#include<stdio.h>
#include<algorithm>

using namespace std;
int main () 
{
	string a, b, sub, max;
	cin >> a;
	cin >> b;
	int i,j,k;	
		int n;
		string d;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			cin >> d;
			size_t pos;
			pos = d.find("->");
			int len = d.length();
			string front,back;
			back = d.substr(len-pos-1);
			front = d.substr(0,1);
//			cout << front  <<endl;
//			cout << back << endl;
			size_t found=a.find(back);
//			cout<< found<<endl;
			while(found!=string::npos)
			{
				
				a.replace(found,2,front);
				found=a.find(back);
			}
			 found=b.find(back);
//			cout<< found<<endl;
			while(found!=string::npos)
			{
				
				b.replace(found,2,front);
				found=b.find(back);
			}
						
		}
//		cout<<a<<endl;
//		cout<<b<<endl;
		for ( i=0; i < a.length(); i++)
		{
			for ( j=0; j < b.length(); j++)
			{
				for ( k=1; k <= a.length() && k <= b.length(); k++)
				{
					if (a.substr(i,k) == b.substr(j,k))
					{
						sub = a.substr(i,k);
					}
					else
					{
						if (sub.length() > max.length())
						{
							max=sub;
						}
						sub="";
					}
				}
					if (sub.length() > max.length())
					{
							max=sub;
					}
						sub="";
			}
		}
		if(max.length()==0)
		{
			cout << "-1" << endl;
		}
		else
		{		
		cout<< max.length()<<endl;		
		}
	return 0;
}

