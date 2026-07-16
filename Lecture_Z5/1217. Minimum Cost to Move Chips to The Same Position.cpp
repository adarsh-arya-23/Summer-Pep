class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int ev = 0;
        int od = 0;
        for(int i : position){
            if(i % 2 == 0){
                ev++;
            }
            else{
                od++;
            }
        }
        return min(ev, od);
    }
};