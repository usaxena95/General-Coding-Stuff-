#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	FILE * t;
	char  buffer[100],i;
	t=fopen("test.txt","r");
	int filechar=fgetc(t);
	while(filechar!=EOF)
	{
		if(filechar=='\n')
		{
			buffer[i]='*';
			filechar=fgetc(t);
		}
		else
		{
			buffer[i]=filechar;
			i++;
		//printf("%c",filechar);
			filechar=fgetc(t);
		}
	}
	//int a[5]={0,5,4,3,2};
	printf("%s\n",buffer);
	for(i=0;buffer[i]!='\0';i++)
	{
		printf("%c",buffer[i]);
	}
	return 0;
}
	
