#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#define TRUE 1
#define FALSE 0
using namespace std;

int detstatus;
int main(int argc,char * argv[])
{	
	if(argc<=1 || argc>3)
	{
		printf("Usage:Either type <./a.out<space>-t<space>filename> or type<./a.out<space>filename>.Later if you do not want to see the details\n");
		exit (-1);
	}
	else
	{
		if (argc==2)
		{
			char * filename= argv[1];
			//printf("%s",filename);
		}
		else
		{
			char* detinfo=argv[1];
			//printf("%s\n",detinfo);

			if(!strcmp(detinfo,"-t"))
			{
				detstatus=TRUE;
				char * filename=argv[2];
				//printf("%s",filename);
			}
			else
			{
					printf("Usage:Either type <./a.out<space>-t<space>filename> or type <./a.out<space>filename>.Later if you do not want to see the details\n");
					exit (-1);
			}
		}
	}
	return 0;
}
			
				
				


