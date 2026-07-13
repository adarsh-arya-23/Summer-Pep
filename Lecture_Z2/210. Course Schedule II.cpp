class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(auto& e:prerequisites){
            int u = e[0];
            int dest = e[1];
            adj[dest].push_back(u);
        }
        vector<int> indegree(numCourses, 0);
        for(int i = 0 ; i < numCourses ; i++){
            for(auto x : adj[i])
                indegree[x]++;
        }
        queue<int> q;
            for(int i = 0 ; i < numCourses ; i++){
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
        if(ans.size() == numCourses) {
            return ans; 
        }
        return {};
    }
};