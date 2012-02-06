#include<iostream> 
int  main()
{
	int t,n,s=0;
	std:: cin>>t;
	while(t--)
	
		std:: cin>>n;
		s+=n>0?n:0;
	
	std:: cout<<s;
}
