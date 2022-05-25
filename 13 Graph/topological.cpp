#include<bits/stdc++.h>
using namespace std; 

// topological sort using DFS
    void fucktopa(int node , vector<int> & vis, stack<int>& st , vector<int> adj[]){
        vis[node] = 1;
        for(auto it : adj[node]){
            if(! vis[it] )
                fucktopa(it, vis, st, adj);
        }
        st.push(node);
    }

	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	   // create a stack 
	   stack<int> st;
	   
	   // create a visited array
	   vector<int> vis(V, 0);
	   
	   // check for the componenets of the graph 
	   for(int i = 0; i<V; i++){
	       if(vis[i] == 0){
	           fucktopa(i , vis, st, adj);
	       }
	   }
	   
	   // store the elements from the stack 
	   vector<int> topo;
	   
	   while(! st.empty()){
	        topo.push_back(st.top());
	        st.pop();
	   	}
	   	return topo;
	   
	}
//

// find topo using BFS or KHN'S Algoritms
vector<int> topoSort(int V, vector<int> adj[]) {
    // create a queue 
    queue<int> q;
    // create a indegree array 
    vector<int> indegree(V , 0);

    for(int i = 0; i<V; i++){
        for(auto it :adj[i]){
            indegree[it]++;
        }
    }

    // push element in the queue
    for(int  i = 0; i<V; i++){
        if(indegree[i] == 0)
            q.push(i);
    }

    // traverse the queue 
    vector<int> topo;
    while( ! q.empty()){
        int node = q.front();
        q.pop();
        topo.push_back(node);
        for(auto it: adj[node]){
            indegree[it]--;
            if(indegree[it] ==0)
                q.push(it);
        }
    }
    return topo;
}


int main()
{
    
    return 0;
}