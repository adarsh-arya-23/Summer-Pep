#include<bits/stdc++.h>
using namespace std;
int main(){
    int v, e;
    cin>>v>>e;
    vector<vector<int>>adj(v);

    // linear Graph Input
    cout<<"Enter the edges of the graph: "<<endl;
    for(int i = 0 ; i < e ; i++){
        int a, b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // Printing the Graph
    cout<<"Graph Representation: "<<endl;
    for(int i = 0 ; i < v ; i++){
        cout<<i<<" -> ";
        for(auto it : adj[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }

    // Breadth First Search
    cout<<"Breadth First Search: "<<endl;
    vector<bool>visited(v, false);
    queue<int>q;
    q.push(0);
    visited[0] = true;
    while(!q.empty()){
        int current = q.front();
        q.pop();
        cout<<current<<" ";

        for(auto it : adj[current]){
            if(!visited[it]){
                visited[it] = true;
                q.push(it);
            }
        }
    }
}