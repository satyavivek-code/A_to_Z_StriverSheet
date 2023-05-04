#include<iostream>
#include<stack>

using namespace std;

void stringReversal(string s){
    int n = s.length();

    stack<string>st;
    for (int i = 0; i < n; i++) {
        string word = "";
        while (s[i] != ' ' && i < n){
            word += s[i];
            i++;
        }
        st.push(word);
    }
    
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

}

int main(){
    string S = "Hey, how you doing?";
    stringReversal(S);
    // return 0;
}