/*
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> stj;

        int counter = 0;
        for(int i = 0 ; i < jewels.size() ; i++){
            stj.insert(jewels[i]);
        }
        for(int i = 0; i < stones.size() ; i++){
            if(stj.count(stones[i])){
                counter++;
            }
        }
        return counter;
    }
};
*/
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt = 0;
        for(int i = 0 ; i < stones.size() ; i++){
            if(jewels.contains(stones[i])) cnt++;
        }
        return cnt;
    }
};