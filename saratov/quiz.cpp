#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
//ifstream ifile("input.txt");
//if(ifile) freopen("input.txt","rt",stdin);


typedef struct Node 
{
	int key;
	int aou;
	Node *next;
}Node;

//void addtocirclist(int);

int main()
{
	ifstream ifile("input.txt");
	if(ifile) freopen("input.txt","rt",stdin);
#ifdef ONLINE_JUDGE
		if(ifile) freopen("output.txt","wt",stdout);
#endif

	int n;
	scanf("%d",&n);
	int k;
	scanf("%d",&k);
	int itr;
	int dirty[n];
	for(itr=0;itr<n;itr++)
	{
		scanf("%d",&dirty[itr]);
	}
	int count;
	Node * boo[n];
	Node *bar;
	Node *head=(Node *) malloc(sizeof(Node));
	//
	boo[0]=head;
	head->key=1;
	if(k==1)
	{
		count=k;
	//	bar=head;
	}
	head->aou=dirty[0];
	head->next=NULL;
	Node* current=head;
	Node* ptr;
	int i;
	//int count;
	for(i=2;i<=n;i++)
	{
		ptr=(Node*) malloc(sizeof(Node));
		boo[i-1]=ptr;
		ptr->key=i;
		if(ptr->key==k)
		{
			count=k;
	//		bar=ptr;
		}
		ptr->aou=dirty[i-1];
		current->next=ptr;
		current=current->next;
	}
	current->next=head;
	//current=current->next;
	current->key=n;
	current->aou=dirty[n-1];
	if(k==n)
	{
		count=k;
	//	bar=current;
	}
	boo[n-1]=current;
	//current->next=head;
	current=current->next;
	int j;
	
	for(j=count-1;j<=n-1;j++)
	{
		if(boo[j]->aou==1)
		{
			printf("%d",boo[j]->key);
			goto foo;
		}
	}
	for(j=0;j<count-1;j++)
	{
		if(boo[j]->aou==1)
		{
			printf("%d",boo[j]->key);
			break;
		}
	}
	foo:
	return 0;
}
	
