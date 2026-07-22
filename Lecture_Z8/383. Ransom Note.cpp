class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26, 0);
        for(char c : magazine){
            freq[c - 'a']++;
        }
        for(char c : ransomNote){
            if(freq[c - 'a'] == 0){
                return false;
            }
            freq[c - 'a']--;
        }

        return true;
    }
};



/*
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> r;
        unordered_map<char, int> m;
        for(auto i:ransomNote) r[i-'a']++;
        for(auto i:magazine) m[i-'a']++;
        for(int i = 0 ; i < 26 ; i++){
            if(r[i] > m[i]) return false;
        }
        return true;
    }
};
*/