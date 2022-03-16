#include<bits/stdc++.h>
using namespace std; 

 bool checkBipertite(int src ,vector<int>adj[] , int color[]){
        // create a queue
        queue<int> q;
        q.push(src);
        color[src] = 1;
        
        while(! q.empty()){
            int node = q.front();
            q.pop();
            for(auto it:adj[node]){
                if(color[it] == -1){
                    color[it] = 1- color[node];
                    q.push(it);
                }
                else if(color[it] == color[node])
                    return false;
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // create a color array 
	    int color[V];
	    memset(color, -1,sizeof color);
            
	    for(int i = 0; i<V; i++){
	        if(color[i] == -1){
	            if(!checkBipertite(i , adj, color))
	            return false;
	        }
	    }
	    return true;
	    
	}

int main()
{
    
    
    return 0;
}