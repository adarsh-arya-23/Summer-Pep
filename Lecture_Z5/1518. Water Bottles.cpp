class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        while(numBottles >= numExchange){
            int x = numBottles / numExchange;
            int y = numBottles % numExchange;
            ans = ans + x;
            numBottles = x + y;
        }
        return ans;
    }
};