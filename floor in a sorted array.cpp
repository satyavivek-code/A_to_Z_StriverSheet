{
        
        // Your code here
        long long start = 0;
        long long end = n-1;
        
        // long long i = -1;
        while (start <= end){
            long long mid = start + (end - start) / 2;
            // if (v[mid]!=x){
            //     return -1;
            // }
            if (v[mid] == x){
                return mid ;
            }
            else if (v[mid] < x){
                start = mid + 1;
                // i = mid;
                
            }
            else{
                end = mid - 1;
            }
        }
        return end;
        
        
    }
