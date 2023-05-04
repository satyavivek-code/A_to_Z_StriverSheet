class Solution {
public:
    string removeOuterParentheses(string s) {
        int openPara = 0;
        int closePara = 0;
        int begin = 0;
        string substring = "";
        
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '('){
                openPara++;
            }
            else if (s[i] == ')'){
                closePara++;
            }
            if (openPara == closePara){
                substring += s.substr(begin + 1, i - begin - 1);
                begin = i + 1;
            }
        }
        return substring;
    }
};
