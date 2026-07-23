class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        int max = -1;
        for(auto i:arr){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.first == i.second){
                if(max < i.first) max = i.first;
            }
        }
        return max;
    }
};