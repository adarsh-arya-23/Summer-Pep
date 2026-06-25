class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int high = 0;
        int low = 0;
        int sum = 0;
        int min_len = INT_MAX;
        int n = nums.size();
        for(high = 0 ; high < n ; high++){
            sum = sum + nums[high];
            while(sum >= target){
                int tempLen = high-low+1;
                min_len = min(tempLen, min_len);
                sum-=nums[low];
                low++;
            }
        }
        if(min_len == INT_MAX){
            return 0;
        }
        else{
            return min_len;
        }
    }
};