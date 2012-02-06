#include <iostream>
#include <string>
#include<stdio.h>
#include<algorithm>

using namespace std;
int main () {
	
	string a, b, sub, max;
	cin >> a;
	cin >> b;
	int i,j,k;	
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
	
//		cout<<max;	
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
			size_t found=max.find(back);
//			cout<< found<<endl;
			while(found!=string::npos)
			{
				
				max.replace(found,2,front);
				found=max.find(back);
			}
					
		}
		
		return 0;
}
