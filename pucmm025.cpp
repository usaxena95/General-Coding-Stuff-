#include<iostream>
#include<stdlib.h>
#include<stdio.h>


using namespace std;

string convertInt(int number)
{
    if (number == 0)
        return "0";
    string temp="";
    string returnvalue="";
    while (number>0)
    {
        temp+=number%10+48;
        number/=10;
    }
    for (int i=0;i<temp.length();i++)
        returnvalue+=temp[temp.length()-i-1];
    return returnvalue;
}
int div2 (string a)
{
	int aint=0;
	size_t pos=a.length()-1;
	aint=atoi(a.substr(pos,1).c_str());
	if(aint%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int div3(string a)
{
	int aint=0,i;
	size_t pos=0;
	for(pos=0;pos<=a.length()-1;pos++)
	{
		aint+=atoi(a.substr(pos,1).c_str());
	}
	if(aint%3==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int div4(string a)
{
	int aint;
	size_t pos=a.length()-2;
	aint=atoi(a.substr(pos,2).c_str());
	if(aint%4==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int div5(string a)
{
	int aint;
	size_t pos=a.length()-1;
	aint=atoi(a.substr(pos,1).c_str());
	if(aint%5==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int div6(string a)
{
	if((div3(a) && div2(a))==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int div7(string a)
{
	int aint=0,i,bint=0;
	size_t pos=0;
	int sum=0,n;
	if(a.length()<=8)
	{
		if(atoi(a.c_str())%7==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	for(pos=a.length()-1;pos>=0;pos--)
	{
		for(n=1;n<=42;n++)
		{
	//		cout<<a.length()-pos<<endl;
			if(a.length()-pos==(6*n-5))
			{
				//cout<<"Hello";
				sum+=atoi(a.substr(pos,1).c_str());
			}
			else if(a.length()-pos==(6*n-4))
			{
				sum+= 3 *atoi(a.substr(pos,1).c_str());
			}
			else if(a.length()-pos==(6*n-3))
			{
				sum+= 2 *atoi(a.substr(pos,1).c_str());
			}
			else if(a.length()-pos==(6*n-2))
			{
				sum+= 6 *atoi(a.substr(pos,1).c_str());
			}
			else if(a.length()-pos==(6*n-1))
			{
				sum+= 4 *atoi(a.substr(pos,1).c_str());
			}
			else if(a.length()-pos==(6*n))
			{
				sum+= 5 *atoi(a.substr(pos,1).c_str());
			}
			else
			{
				continue;
			}
		}
	}
	cout<<sum<<endl;
	if(sum%7==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int div8(string a)
{
	int aint;
	size_t pos=a.length()-3;
	aint=atoi(a.substr(pos,3).c_str());
	if(aint%8==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int div9(string a)
{
	int aint=0,i;
	size_t pos=0;
	for(pos=0;pos<=a.length()-1;pos++)
	{
		aint+=atoi(a.substr(pos,1).c_str());
	}
	if(aint%9==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	string a;
	while(getline(cin,a))
	{
		printf("%d",div7(a));
	}
	return 0;
}
