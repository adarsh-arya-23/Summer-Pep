class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size()/2;
        int res = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            res = res + abs((nums[n]-nums[i]));
        }
        return res;
    }
};