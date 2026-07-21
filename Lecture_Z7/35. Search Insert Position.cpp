/*
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        for(int i = 0 ; i < len ; i++){
            if(nums[i] >= target){
                return i;
            }
        }
        return len;
    }
};
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            if(nums[(low+high)/2] == target) return ((low+high)/2);
            else if(nums[(low+high)/2] < target) low = ((low+high)/2)+1;
            else high = ((low+high)/2)-1;
        }
        return low;
    }
};