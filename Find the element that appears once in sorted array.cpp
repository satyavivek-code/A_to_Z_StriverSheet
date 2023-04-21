/*
GFG function
*/

int findOnce(int arr[], int n)
    {
        //code here.
        int start = 0;
        int end = n-1;
        
        while (start < end){
            int mid = start + (end - start) / 2;
            if (mid % 2 == 1){
                mid--;
            }
            if (arr[mid] != arr[mid+1]){
                end = mid;
            }
            else{
                start = mid + 2;
            }
        }
        return arr[start];
    }
