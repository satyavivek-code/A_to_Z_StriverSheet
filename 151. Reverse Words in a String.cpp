class Solution {
public:
    string reverseWords(string s) {
        vector<string>svec;
        stringstream ss(s);
        string word;

        while(ss >> word ){
            svec.push_back(word);
        }
        reverse(svec.begin(),svec.end());

        string ans;
        for (const auto it: svec){
            ans += " "+ it;

        }
        ans.erase(0,1);
        return ans;

        
    }
};
