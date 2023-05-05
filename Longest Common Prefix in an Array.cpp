//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        sort(arr, arr+N);
        string n = arr[0];
        int index = 0;
        string ans = "";
        for (char c : n){
            for (int i = 1; i < N; i++){
                if (c == arr[i][index]){
                    continue;
                }
                else if (ans.size() == 0){
                    return "-1";
                }
                return ans;
            }
            ans += c;
            index++;
        }
        return ans;
        
    }
};
