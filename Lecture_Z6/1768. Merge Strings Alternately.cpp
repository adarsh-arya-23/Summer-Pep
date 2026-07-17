class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str = "";
        int l1 = word1.length();
        int l2 = word2.length();
        int i = 0; 
        int j = 0;
        while(i < l1 && j < l2){
            str.push_back(word1[i]);
            str.push_back(word2[i]);
            i++;
            j++;
        }
        while(i < l1){
            str.push_back(word1[i]);
            i++;
        }
        while(j < l2){
            str.push_back(word2[j]);
            j++;
        }
        return str;
    }
};