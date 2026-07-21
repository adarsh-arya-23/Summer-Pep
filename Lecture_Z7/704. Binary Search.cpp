/*
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int low = 0;
        int high = size-1;
        while(low <= high){
            int mid = (low+high)/2;
            if(target > nums[mid]){
                low = mid+1;
            }
            else if(target < nums[mid]){
                high = mid-1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            if(nums[(low+high)/2] == target) return ((low+high)/2);
            else if(nums[(low+high)/2] < target) low = ((low+high)/2)+1;
            else high = ((low+high)/2)-1;
        }
        return -1;
    }
};