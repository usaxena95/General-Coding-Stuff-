#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

char a[100000];
int  o[26];
int main()
{
	
	int i;
	for(i=0;i<26;i++)
	{
			o[i]=0;
	}
	for(i=0;i<10000;i++)
	{
		char c;
		if(c=='\n')
		{
			break;
		}
		scanf("%c",&a[i]);
		switch(a[i])
		{
			case 'a':
				{
					o[0]++;
				}
			case 'b':
                                {
                                        o[1]++;
                                }
			case 'c':
                                {
                                        o[2]++;
                                }
			case 'd':
                                {
                                        o[3]++;
                                }
			case 'e':
                                {
                                        o[4]++;
                                }
			  case 'f':
                                {
                                        o[5]++;
                                }
                        case 'g':
                                {
                                        o[6]++;
                                }
                        case 'h':
                                {
                                        o[7]++;
                                }
                        case 'i':
                                {
                                        o[8]++;
                                }
                        case 'j':
                                {
                                        o[9]++;
                                }

			 case 'k':
                                {
                                        o[10]++;
                                }
                        case 'l':
                                {
                                        o[11]++;
                                }
                        case 'm':
                                {
                                        o[12]++;
                                }
                        case 'n':
                                {
                                        o[13]++;
                                }
                        case 'o':
                                {
                                        o[14]++;
                                }
                          case 'p':
                                {
                                        o[15]++;
                                }
                        case 'q':
                                {
                                        o[16]++;
                                }
                        case 'r':
                                {
                                        o[17]++;
                                }
                        case 's':
                                {
                                        o[18]++;
                                }
                        case 't':
                                {
                                        o[19]++;
                                }
			 case 'u':
                                {
                                        o[20]++;
                                }
                          case 'v':
                                {
                                        o[21]++;
                                }
                        case 'w':
                                {
                                        o[22]++;
                                }
                        case 'x':
                                {
                                        o[23]++;
                                }
                        case 'y':
                                {
                                        o[24]++;
                                }
                        case 'z':
                                {
                                        o[25]++;
                                }

			default:
				{
					continue;
				}
		}

	}
	printf("hello");	
	int k;
	scanf("%d",k);
	printf("hello");
	//test the occurance for every character
	for(i=0;i<26;i++)
	{
		printf("\nb%d ",o[i]);
	}
}
	
