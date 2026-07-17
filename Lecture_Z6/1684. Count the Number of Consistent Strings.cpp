class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt = 0;
        sort(allowed.begin(), allowed.end());
        set<char> st(allowed.begin(), allowed.end());
        for(int i = 0 ; i < words.size() ; i++){
            sort(words[i].begin(), words[i].end());
            set<char> st2(words[i].begin(), words[i].end());
            if(includes(st.begin(), st.end(), st2.begin(), st2.end())){
                cnt++;
            }
        }
        return cnt;
    }
};