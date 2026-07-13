/*
Directed Graph
Cycle Detection in directed graph:- Kahn Algorithm [Works for directed Acylic Graph]
If there is edge between u->v : we should traverse in such a manner that i is always before v.
If every vertex has atleast one indegree than the graph is cyclic.

************KAHN ALGORITHM************
1> Calculate Indegree of each vertex.
2> We do BFS traversal : use queue.
3> push all the vertex with indegree 0 in queue.
4> Take the front element of the queue and decrease the indegree of every vertex connected to it. 
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> topoSort(int v, vector<vector<int>>& edges) {
            vector<vector<int>> adj(v);
            for(auto& e : edges){
                int u = e[0];
                int dest = e[1];
                adj[u].push_back(dest);
            }
            vector<int> indegree(v, 0);
            for(int i = 0 ; i < v ; i++){
                for(auto x : adj[i])
                    indegree[x]++;
            }
            queue<int> q;
            for(int i = 0 ; i < v ; i++){
                if(indegree[i] == 0)
                    q.push(i);
            }
            vector<int> ans;
            while(!q.empty()){
                int x = q.front();
                q.pop();
                ans.push_back(x);
                for(auto temp : adj[x]){
                    indegree[temp]--;
                    if(indegree[temp] == 0)
                        q.push(temp);
                }
            }
            return ans;
        }
};
int main(){
    int v, e;
    cin >> v >> e;
    vector<vector<int>> edges(e, vector<int>(2));
    for(int i = 0 ; i < e ; i++)
        cin >> edges[i][0] >> edges[i][1];
    Solution obj;
    cout << "Input graph edges:\n";
    for(int i = 0; i < e; i++) {
        cout << edges[i][0] << " -> " << edges[i][1] << '\n';
    }
    // Sample Input:- 5 7 2 5 2 1 2 3 0 5 0 1 0 4 3 5
    vector<int> ans = obj.topoSort(v, edges);
    for(auto x : ans)
        cout << x << " ";
    return 0;
}