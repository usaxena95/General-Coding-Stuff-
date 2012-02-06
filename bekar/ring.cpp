#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//#include<cstring>
//#include<fstream>

#define TRUE 1
#define FALSE 0

using namespace std;

//status of details wanted 
int detstatus;
//iterator to go through the nodes
int i=0;
//buffer to hold the numbers in the file
char buffer[1000];
//number of stations in the ring or nodes in the ring
int numsta;
enum type{TokenT,TokenR,FrameA,FrameT,FrameR};
enum tok{token,data};
 typedef struct  Job
{
	int source,dest;
	int length;
	int time;
	int transtime;
	type  category ;
	//We are to implement single priority only
	int priority;
	Job *next;
}Job; 

Job *head;

//to create circular linked list cointaining all the nodes
typedef struct Node
{
	int id;
	//jobs will be in a list here for each frame
	Job *key;
	Node * next;
}Node;
//typedef node* Node;
//
typedef struct Token
{
	tok token;
}Token;

void filetobuf(FILE *);
void printinitstats(void);
//void initnode(void);
void initnodecirclist(int );
void buftojob(int);
void jobtolist(Job *);
int joblistempty(void);
void printjoblist(void);
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
			//printf("%s\n",filename);
			FILE *testfile;
			testfile=fopen(filename,"r");
			if(testfile==NULL)
			{
				printf("Error opening file\n");
				exit(-2);
			}
			else
			{
				filetobuf(testfile);				
			}
			fclose(testfile);
			sscanf(buffer,"%d",&numsta);
			int itr;
			for(itr=0;itr<7;itr++)
			{
			
				buftojob(itr);
			}
			
			//use of buftojob comes here

			printinitstats();
			printjoblist();
			/*	int j;
			for(j=0;j<numsta;j++)
			{
				initnode();
			}
			*/
			initnodecirclist(numsta);
			//printf("%s",buffer);
			//printf("\n%d",s);
			//printf("%c",buffer[39]);
		}
		else
		{
			char* detinfo=argv[1];
			//printf("%s\n",detinfo);
			if(!strcmp(detinfo,"-t"))
			{
				detstatus=TRUE;
				FILE *testfile;
				char * filename=argv[2];
				testfile=fopen(filename,"r");
				if(testfile==NULL)
				{
					printf("Error opening file\n");
					exit(-2);
				}
				else
				{
					 filetobuf(testfile);					
				}
				fclose(testfile);
				//will construct another function for this
				sscanf(buffer,"%d",&numsta);
				//use of buftojob comes here
				int itr;
				for(itr=1;itr<6;itr++)
				{
			
					buftojob(itr);
				}

				//printf("%s",buffer);
				//printf("\n%d",detstatus);
				printinitstats();
				initnodecirclist(numsta);
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
			
//file cointaines that is being put into the buffer				
void filetobuf(FILE* testfile)
{
				int filechar=fgetc(testfile);
				//getline(testfile,buffer);
				
				while(filechar!=EOF)
				{
					if(filechar=='\0')
					{
						
						buffer[i]='\0';
						filechar=fgetc(testfile);
					}
					else if(filechar=='#')
					{
						do
						{
							filechar=fgetc(testfile);
						}
						while(filechar!='\n');
					}
					else
					{
						buffer[i]=filechar;
						//printf("%c",buffer[i]);
						i++;
						filechar=fgetc(testfile);
					}
				}
}
//get the job in nth line of file(actully buffer) and put it in joblist
void buftojob(int line)
{
			Job * job;//=(Job *)malloc(sizeof(Job));
			int count=0,k;
			for(k=0;k<1000;k++)
			{
				if(buffer[k]=='\n')
				{
					count++;
					if(count==(line-1))
					{
						sscanf(buffer+k,"%d %d %d %d %d",&(job->time),&(job->source),&(job->dest),&(job->length),&(job->priority));
						printf("boo");
						jobtolist(job);
						//printf("%d",timee);
						break;
					}
				}
			}
			//now make a job list in which you can append or prepend jobs

}
//new function i have made now but joblistempty still needs to be defined
void jobtolist(Job * bar)
{
	//Job * head;
	Job * back;
	Job* ptr=(Job *) malloc(sizeof(Job));
	if(joblistempty())
	{
		//printf("boo\n");
		head=back=bar;
	}
	else if(bar->time<=head->time)
	{
		//make it the first item
		bar->next=head;
		head=bar;
	}
	else
	{
		//search where it can be put in the list and put it there
	for(ptr=head;ptr->next!=NULL;ptr->next)
	{
		if(bar->time<=ptr->next->time)
		{
			bar->next=ptr->next;
			ptr->next=bar;
			break;
		}
	}

	}
	back->next=bar;
	back=bar;
	
}
void printjoblist()
{
	Job * egg;
	printf("\n########################################\n");
	for(egg=head;egg!=NULL;egg=egg->next)
	{
		printf("%d %d %d %d %d \n",egg->time,egg->source,egg->dest,egg->length,egg->priority);
		break;
	}
}


int  joblistempty()
{
	if(head==NULL)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

//just for printing initial stats
void printinitstats()
{
	printf("\nTRACING OF PACKET---->");
	if(detstatus)
	{
		printf(" YES");
	}
	else
	{
		printf(" NO");
	}
	printf("\nNumber of stations---->");
	printf("%d",numsta);
}

//will initiate the circular list of nodes as a token ring
void initnodecirclist(int nos)
{
	Node *head=(Node*) malloc(sizeof(Node));
	head->id=i;
	head->next=NULL;
	//initnode();
	Node *current=head;
	Node *ptr;
	for(i=1;i<nos;i++)
	{
		ptr=(Node*)malloc (sizeof(Node));
		ptr->id=i;
		//initnode();
		current->next=ptr;
		current=current->next;
		//printf("%d",i);
	}
	current->next=head;
	current=current->next;
}
	
void starttokenring()
{
	Job * event=(Job *)malloc(sizeof(Job));
   	sscanf("0 0 1 0 0", "%d %d %d %d %d",  &(event->time),&(event->source),&(event->dest),&(event->length), &( event->priority));   
	jobtolist(event);
	while(1)
	{
		removefromlist(head);
		if((head->category==TokenT) && joblistempty(head))
		{
			break;
		}
		if(currenttime<=event->time)
		{
		currenttime=event->time;
		implementpriority();
		}
	}
}	
