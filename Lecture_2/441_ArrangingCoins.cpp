class Solution {
public:
    int arrangeCoins(int n) {
        int i = 1;
        int cnt = 0;
        while(n >= i){
            n=n-i;
            i++;
            cnt++;
        }
        return cnt;
    }
};

// Second Approach:
// k*((k+1)/2)  <= n
// k*(k+1) <= 2n
// k^2+k-2n >= 0
// 