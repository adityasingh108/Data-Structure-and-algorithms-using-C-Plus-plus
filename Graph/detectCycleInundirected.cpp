#include<bits/stdc++.h>
using namespace std; 

bool dfs(int i,int parent,vector<int>&vis,vector<int>adj[])
    {
        vis[i]=true;
        for(auto it:adj[i])
        {
            if(vis[it]==false)
            {
                if(dfs(it,i,vis,adj))
                {
                    return true;
                }
            }
            else if(it!=parent){
                return true;
            }
        }
        return false;
    }
bool isCycle(int V, vector<int> adj[]) {
       // create a visited array of size of the vertex
       vector<int>vis(V,0);
       
        for(int i=0;i<V;i++)
        {
            if(vis[i]==false)
            {
             if(dfs(i,-1,vis,adj))
            {
            return true;
            }
            }
        }
        return false;
    }

    