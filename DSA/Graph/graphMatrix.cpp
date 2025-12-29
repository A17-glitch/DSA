#include<iostream>
#include <iomanip>
using namespace std;
int main(){

    int n, m; //m = edge, n = node;
    cin>>n>>m;
    int adj[n+1][m+1] = {0};

    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
        
    }

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout<<adj[i][j]<<" ";
    //     }
    //     cout<<endl;

    // }
    
    // print column labels
cout << "   ";
for(int j = 1; j <= n; j++) cout << j << " ";
cout << endl;

// print matrix with row labels
for(int i = 1; i <= n; i++) {
    cout << i << ": ";
    for(int j = 1; j <= n; j++) {
        cout << adj[i][j] << " ";
    }
    cout << endl;
}

    return 0;
}