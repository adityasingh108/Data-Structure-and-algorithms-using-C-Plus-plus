#include<bits/stdc++.h>
using namespace std; 
class graph{
    public:
    unordered_map<int , list<int>> adj;

    void addEdge(int u , int v ,  bool direction){
        // directed graph if bool -> 1
        // undirected graph  if direction -> 0

        // creation of edge 
        adj[u].push_back(v);

        // chech the direction 
        if(direction==0){
            adj[v].push_back(u);
        }

    }

    void printGraph(){
        for(auto i : adj){
            cout << i.first << " ->";
            for(auto j:i.second){
                cout << j << ", ";
            }
            cout<<endl; 
        }
    }

};

int main()
{
    int n  , m  , u , v; 
    cout << "Enter the number of the Node : "<<endl;
    cin >> n  ;


    cout << "Enter the number of the edge : "<<endl;
    cin >> m  ;

    // create a graph 

    graph  g ;

    for(int i = 0; i< m  ; i++){
        // cout<< "Enter the Edge between node :"<<endl;
        cin >> u >> v ;
        // create a undirected graph 
        g.addEdge(u, v, 0);
    }
    g.printGraph();

    
    return 0;
}