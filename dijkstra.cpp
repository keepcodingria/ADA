#include<iostream>
#include<climits>
using namespace std; 

#define MAX 100

int mindistance(int vertices, int key[],bool mst[])
{
    int min=INT_MAX;
    int minVertex;
    
    for(int v=0;v<vertices;v++){
        if(!mst[v] && key[v]<min)
        {
            min=key[v];
            minVertex=v;
        }
    }
    return minVertex;
}

void dijkstra(int graph[MAX][MAX],int vertices)
{
    bool mst[MAX];
    int parent[MAX];
    int key[MAX];

    for(int v=0;v<vertices;v++)
    {
       key[v]=INT_MAX;
       mst[v]=false;
    }

    key[0]=0;
    parent[0]=-1;

  for(int edges=0;edges<vertices-1;edges++)
  {
    int u=mindistance(vertices,key,mst);
    mst[u]=true;
  
    for(int v=0;v<vertices;v++)
    {
        if(graph[u][v] && !mst[v]&& key[v]!=INT_MAX && graph[u][v]+key[u] <key[v])
        {
          key[v] = graph[u][v]+key[u] ;
            parent[v]=u;
        }
    }
  }

cout<<"edge:weight"<<endl;
for(int i=1;i<vertices;i++) // since parent of 0 is -1 , start from i=1
{
    cout<<parent[i]<<"-"<<i<< ": "<< graph[i][parent[i]]<<endl;
}
}

int main()
{
   int graph[MAX][MAX];
   int vertices;

   cout<<"enter no. of vertices: "<<endl;
   cin>>vertices;
   cout<<" enter the edges (enter 0 if no edge exist) :"<<endl;

   for(int i=0;i<vertices;i++)
   {
    for(int j=0;j<vertices;j++)
    {
       cin>> graph[i][j];
    }
   }

   dijkstra(graph,vertices);
}
