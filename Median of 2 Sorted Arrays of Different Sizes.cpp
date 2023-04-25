/*
GFG
*/


double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        int n = array1.size();
        int m = array2.size();
        int i = 0, j = 0, mi = 0;
        int mid = ((n + m) / 2)+1;
        vector<int>v(mid);
        while (i < n && j < m && mi < mid){
            if(array1[i] < array2[j]){
                v[mi++] = array1[i++];
            }
            else{
                v[mi++] = array2[j++];
            }
        }
        while (i < n && mi < mid){
            v[mi++] = array1[i++];
        }
        while (j < m && mi < mid){
            v[mi++] = array2[j++];
        }
        
        if ((n+m)&1){
            return v[mid-1];
        }
        return ((double) v[mid-1] + (double)v[mid-2]) / 2;
        // return median;
    }
