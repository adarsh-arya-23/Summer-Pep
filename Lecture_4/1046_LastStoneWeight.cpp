class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        int n = stones.size();
        for(int i = 0 ; i < n ; i++){
            pq.push(stones[i]);
        }
        while(pq.size() > 1){
            int var1 = pq.top();
            pq.pop();
            int var2 = pq.top();
            pq.pop();
            if(var1-var2 != 0){
                pq.push(abs(var1-var2));
            }
        }
        return pq.empty()?0:pq.top();
    }
};