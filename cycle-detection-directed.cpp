#include <iostream>
using namespace std;


#define max 100

bool dfs(int node,int adj[max][max], bool visited[],bool path[],int v) 
{
    visited[node]=true;
    path[node]=true;
    for(int i=0;i<v;i++)
    {
        if(adj[node][i]=1)
        {
            if(!visited[i])
            {
                dfs(i,adj,visited,path,v);
                    return true;     
            }
        }
        else if(path[i]) {
            return false;
        }
    }
    path[node]=false;
    return false;
}

bool cycle(int adj[max][max], int v)
{
    bool visited[max]= {false};
    bool path[max]={false};
    for(int i=0;i<v;i++)
    {
      if(!visited[i])
    {
       if (dfs(i,adj,visited,path,v))
       {
        return true;
       }
    }
    }
    return false;
}
int main() {
    
    int adj[max][max];
    int v;

    cout<<"enter no. of vertices: ";
    cin>>v;
    cout<<"edges: "<<endl;
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cin>>adj[i][j];
        }
    }
    
    if(cycle(adj,v))
    {
        cout<<"cycle detected";
    }
        else{
         cout<<"no cycle";
        }
    return 0;
}