/*
Brute force approch 
*/

    int majorityElement(int a[], int size)
    {
        
        // your code here
        int count = 0;
        int mid = size / 2;
        
        for(int i = 0; i < size; i++){
            count = 0;
            for (int j = 0; j < size; j++){
                if (a[i] == a[j]){
                    count++;
                }
            }
            if (count >=mid){
                return count;
            }
        }
        return -1;
        
    }


/*
better approach
*/
   int majorityElement(int a[], int size)
    {
        
        // your code here
        vector<int>v;
        for(int i = 0; i < size; i++){
            v.push_back(a[i]);
        }
        map<int,int>mp;
        
        for (int i = 0; i< size; i++){
            mp[v[i]]++;
        }
        for (auto it:mp){
            if (it.second  > (size/2)){
                return it.first;
            }
        }
        return -1;
        
    }
