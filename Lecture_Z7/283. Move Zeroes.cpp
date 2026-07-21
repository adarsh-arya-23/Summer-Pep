/*
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        vector<int> newvec;
        int counter = 0;
        for(int i = 0 ; i < size ; i++){
            if(nums[i] == 0){
                counter++;
            }
            else{
                newvec.push_back(nums[i]);
            }
        }
        for(int i = 0 ; i < counter; i++){
            newvec.push_back(0);
        }
        nums=newvec;
    }
};
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        while(j < nums.size()){
            if(nums[j] != 0){
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
    }   
};