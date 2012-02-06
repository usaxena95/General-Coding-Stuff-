#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//void truncate(int * );
using namespace std;
void truncate(char *);
int main()
{
	char a[50];
	
	
	int i;
	for(i=0;i<50;i++)
	{
		a[i]='a';
	}
	//int s[50];
	//scanf("%s",a);
	gets(a);
	truncate(a);

	return 0;

}
void  truncate(char *b)
{
            char *ptr;
			char d[50];
			int l;
			for(l=0;l<50;l++)
			{
				d[49-l]=b[l];
			}
            ptr=d;
            int count=0;
            while(*ptr==0||*ptr=='a')
            {
                ptr++;
				if(*ptr==0)
				{
                count++;
				}
            }
			/*
			if(count>0)
			{
				printf("-1\n",count);
				return;
			}*/
            char c[50-count];
            int j;
            for(j=0;j<(50-count);j++)
            {
                c[j]=*ptr;
                ptr++;
              //  printf("%c",c[j]);
            }
			//printf("\n");
			int nofour=0,noseven=0,boom=0;
			for(j=0;j<(50-count);j++)
			{
				if(c[j]=='4' )
				{
					nofour++;
				}
				else if(c[j]== '7')
				{
					noseven++;
				}
				else
				{
					boom++;
				}
			}
			if(boom==(50-count))
			{
				printf("-1");
				return  ;
			}
			else
			{
				if(nofour>=noseven)
				{
					printf("4");
					return ;
				}
				else 
				{
					printf("7");
					return ;
				}
			}
}
          
