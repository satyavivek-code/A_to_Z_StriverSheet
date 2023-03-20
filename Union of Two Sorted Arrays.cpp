/*
Union of two array
*/


class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements\]\```
        vector<int> Union;
        set <int> s;
        
        for (int i = 0; i < n; i++){
            s.insert(arr1[i]);
        }
        for (int i = 0; i< m; i++){
            s.insert(arr2[i]);
        }
        
        // s contain total number of set and it can be access by it variable
        
        for(auto & it : s){
            Union.push_back(it);
        }
        return Union;
    }
};
