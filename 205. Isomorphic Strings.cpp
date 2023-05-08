
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int len1 = s.size();
        int len2 = t.size();

        if(len1 != len2){
            return false;
        }
        unordered_map<char, vector<int>> mp1;
        unordered_map<char, vector<int>> mp2;

        for (int i = 0; i<len1; i++){
            mp1[s[i]].push_back(i);
        }
        for (int j = 0; j<len2; j++){
            mp2[t[j]].push_back(j);
        }
        for (int i = 0; i < len1; i++){
            if (mp1[s[i]] != mp2[t[i]]){
                return false;
            }
        }
        return true;
    }
};
