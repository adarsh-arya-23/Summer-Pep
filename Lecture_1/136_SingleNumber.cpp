class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // x XOR x = 0
        // x XOR 0 = x
        int res = nums[0];
        for(int i = 1 ; i < nums.size(); i++){
            res = res^nums[i];
        }
        return res;
    }
};