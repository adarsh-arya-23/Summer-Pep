/*
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        vector<int> ans;
        for(int i : nums){
            mp[i]++;
        }
        vector<pair<int, int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), [](const pair<int,int>& a, const pair<int,int>& b){
            return a.second > b.second;
        });
        for(auto &it : vec){
            if(k > 0){
                ans.push_back(it.first);
                k--;
            }
        }
        return ans;
    }
};
*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>> pq;
        vector<int> answer;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto x:mp){
            pq.push({x.second, x.first});
        }
        while(k>0 && !pq.empty()){
            answer.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return answer;
    }
};
