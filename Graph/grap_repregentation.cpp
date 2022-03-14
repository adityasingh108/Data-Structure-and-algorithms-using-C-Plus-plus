#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << " Enter the vertex and edges:" <<endl;
    cin >> n >> m;

    // decleare the adjecnt matix

    int adj[n+1][n+1];
    // take input as a edge
    for(int i =0; i<m; i++){
        cout <<  "Edge"<<endl;
        int u , v;
        cin >> u >>v;
        adj[u][v] = 1;  
        adj[v][u] = 1;
    }

    cout << " adcent matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}