 
/* 
optimize code
*/

 void sort012(int a[], int n)
    {
        // code here 
        vector<int> v1, v2,v3;
        
        for(int i = 0; i < n; i++){
            if (a[i] == 0){
                v1.push_back(a[i]);
            }
            if (a[i] == 1){
                v2.push_back(a[i]);
            }
            if (a[i] == 2){
                v3.push_back(a[i]);
            }
        }
        v2.insert(v2.end(), v3.begin(), v3.end());
        v1.insert(v1.end(), v2.begin(), v2.end());
        for(int i = 0; i < n; i++){
            a[i] = v1[i];
        }
    }
