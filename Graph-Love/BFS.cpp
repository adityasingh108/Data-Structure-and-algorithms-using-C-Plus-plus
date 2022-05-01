#include<vector>
#include<unordered_map>
#include<set>
#include<queue>
using namespace std;

void bfs(unordered_map<int , set<int>> &adjlist, unordered_map<int, bool>& visited, vector<int> &ans, int node ){
	// create a queue
	queue<int> q;
	q.push(node);
	visited[node] = 1;
	while(!q.empty()){
		// create a front node 
		int frontNode = q.front();
		ans.push_back(frontNode);
		q.pop();
		for(auto it :adjlist[frontNode]){
			if(!visited[it]){
				q.push(it);
				visited[it] = 1;
			}
		}
		
	}
}

void prepareadj(unordered_map<int , set<int>> & adjlist,vector<pair<int, int>> &edges ){
	for(int i = 0; i<edges.size(); i++){
		int u = edges[i].first;
		int v = edges[i].second;
		adjlist[u].insert(v);
		adjlist[v].insert(u);
	}
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // create a unorderd map 
	unordered_map<int , set<int>> adjlist;
	// create a vector to store the bfs
	vector<int> ans;
	
	// 	created a vistited map 
	unordered_map<int, bool> visited;
	
	// create a adjency list 
	prepareadj(adjlist, edges);
	
	// traverse all the components of the graph 
	for(int i = 0; i<vertex; i++){
		if(!visited[i]){
			bfs(adjlist, visited, ans, i);
		}
	}
	
	return ans;
	
}
int main(){

    
    return 0;
}