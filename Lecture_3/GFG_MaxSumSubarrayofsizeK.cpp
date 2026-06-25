class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int i = 0, j = 0;
        int mx = 0;
        int sum = 0;
        while(j < n){
            sum = sum + arr[j];
            if(j<k-1){
                j++;
            }
            else if(j-i+1 == k){
                mx = max(mx, sum);
                sum = sum - arr[i];
                i++;
                j++;
            }
        }
        return mx;
    }
};