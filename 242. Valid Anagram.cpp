/*
LeetCode
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return 0;
        }
        int temp[26] = {0};
        for (int i = 0; i<s.length(); i++){
            temp[(s[i] - 'a')%26]++;
            temp[(t[i] - 'a')%26]--;
        }
        for (int i = 0; i < 26; i++){
            if (temp[i]){
                return false;
            }
        }
        return true;
        
    }
};
