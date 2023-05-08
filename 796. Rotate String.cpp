class Solution {
public:
    bool rotateString(string s, string goal) {
        int len1 = s.length();
        int len2 = goal.length();

        if (len1 != len2){
            return false;
        }
        while (len2--){
            if (s == goal){
                return true;
            }
            s = s.substr(1) + s[0];
        }
        return false;
        
    }
};
