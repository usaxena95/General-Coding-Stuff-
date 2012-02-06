#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>

using namespace std;
void Naya_binary(int n)
{
	if(n!=1)
		if(n%2 == 0)
			Naya_binary(n/2);
		else
			Naya_binary((n+1)/2);
	printf("%d",n%2);
}

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	char c;
	string s;
	for(i=0;i<n;i++)
	{
		cin >> c >> s;
		if(c=='A')
		{
			Naya_binary

	}	

	return 0;
}
