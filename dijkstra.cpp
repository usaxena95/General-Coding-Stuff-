#include<iostream.h>
class dijkstra
{
private:
 int graph[15][15];
 int set[15],predecessor[15],mark[15],pathestimate[15];
 int source;
 int num_of_vertices;
public:
 int minimum();
 void read();
 void initialize();
 void printpath(int);
 void algorithm();
 void output();
};
/*
void dijkstra::read()
{
 cout<<”enter the number of vertices\n”;
 cin>>num_of_vertices;
 while(num_of_vertices<=0)

{
  cout<<”\nthis is meaningless,enter the number carefully\n”;

cin>>num_of_vertices;

}
 cout<<”enter the adjacent matrix:\n”;
 for(int i=1;i<=num_of_vertices;i++)
 {
  cout<<”\nenter the weights for the row\n”<<i;
  for(int j=1;j<=num_of_vertices;j++)
  {
   cin>>graph[i][j];
   while(graph[i][j]<0)
   {
    cout<<”\nu should enter the positive valued weights only\nenter the value again\n”;
    cin>>graph[i][j];
   }
  }
 }
cout<<”\nenter the source vertex\n”;
cin>>source;
}
*/
/*
void dijkstra::initialize()
{
 for(int i=1;i<=num_of_vertices;i++)
 w
  mark[i]=0;
  pathestimate[i]=999;
  predecessor[i]=0;
 }
 pathestimate=0;
}
*/
void dijkstra::algorithm()
{
 initialize();
 int count=0;
 int i;
 int u;
while(count<num_of_vertices)
 {
  u=minimum();
  set[++count]=u;
  mark[u]=1;
  for(i=1;i<=num_of_vertices;i++)
  {
   if(graph[u][i]>0)
   {
    if(mark[i]!=1)
    {
    if(pathestimate[i]>pathestimate[u]+graph[u][i])
    {
     pathestimate[i]=pathestimate[u]+graph[u][i];
     predecessor[i]=u;
    }
    }
   }
  }
 }

}

void dijkstra::printpath(int i)
{
cout<<endl;
if(i==source)
{
cout<<source;
}
else if(predecessor[i]==0)
cout<<”no path from “<<source<<” to “<<i;
else
{
printpath(predecessor[i]);
cout<<”..”<<i;
}
}
void dijkstra::output()
{
 for(int i=1;i<=num_of_vertices;i++)
 {
 printpath(i);
 if(pathestimate[i]!=999)
  cout<<”->(“<<pathestimate[i]<<”)\n”;
 }
 cout<<endl;
}
int dijkstra::minimum()
{
int min=999;
 int i,t;
 for(i=1;i<=num_of_vertices;i++)
 {
  if(mark[i]!=1)
  {
   if(min>=pathestimate[i])
   {
   min=pathestimate[i];
   t=i;
   }
  }
 }
 return t;
}
void main()
{
 dijkstra s;
 s.read();
 s.algorithm();
 s.output();
}
