#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

int main()
{
	int a[5];
	int *ptr=a;
	int *ptr1=a+5;
	printf("%d",ptr1-ptr);
}
