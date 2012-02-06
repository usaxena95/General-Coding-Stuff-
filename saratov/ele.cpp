#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<fstream>
using namespace std;

int main()
{
//#include <fstream>
	
			ifstream ifile("input.txt");
		if(ifile) freopen("input.txt","rt",stdin);
#ifdef ONLINE_JUDGE
			if(ifile) freopen("output.txt","wt",stdout);
#endif
	char inp[5];
	//string s;
	scanf("%s",inp);
	int r;
	scanf("%d",&r);
	if((!strcmp("front",inp)) && r==1)
	 {
		   printf("L\n");
  	}	
	else if((!strcmp("back",inp)) && r==2)
	{
		printf("L\n");
	}
	else if((!strcmp("front",inp)) && r==2)
	{
		printf("R\n");
	}
	else if((!strcmp("back",inp) ) && r==1)
	{
		printf("R\n");
	}
	else
	{
		printf("boo\n");
	}
}


