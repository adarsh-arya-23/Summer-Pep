class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0;
        double res = 0;
        double mx = INT_MIN;
        double sum = 0;
        while(j < n){
            sum = sum + nums[j];
            if(j<k-1){
                j++;
            }
            else if(j-i+1 == k){
                mx = max(mx, sum);
                sum = sum - nums[i];
                res = mx / k;
                i++;
                j++;
            }
        }
        return res;
    }
};