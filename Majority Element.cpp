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
