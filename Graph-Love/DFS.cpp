#include<bits/stdc++.h>
using namespace std;

void dfs(int node, unordered_map<int, bool> &visited,
		 unordered_map<int ,list<int> > &adj ,vector<int> &component)
{
	component.push_back(node);
	visited[node] = true;
	// every adject node calls the dfs 
	for(auto it :adj[node]){
		if(!visited[it]){
			dfs(it , visited, adj, component);
		}
	}
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // create a adjecncy list 
	unordered_map<int ,list<int> >  adj;
	for(int i = 0; i<edges.size(); i++){
		int u = edges[i][0];
		int v = edges[i][1];
		
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	// create a visited map
	unordered_map<int, bool> visited;
	vector<vector<int>>ans;
	
	// traverse the all node in the graph
	for(int i = 0; i<V; i++){
		if(!visited[i]){
			vector<int> component;
			dfs(i , visited,adj, component);
			ans.push_back(component);
		}
	}
	return ans;
}