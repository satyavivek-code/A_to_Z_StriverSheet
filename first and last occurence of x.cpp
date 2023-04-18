/*
GFG
*/


int lowerbound(int arr[], int n, int k){
    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if (arr[mid] < k){
            start = mid + 1;
        }
        else {
            end = mid - 1 ;
        }
    }
    return start;
}
vector<int> find(int arr[], int n , int x )
{
    // code here
    int startingPoint = lowerbound(arr, n, x);
    int endingPoint = lowerbound(arr, n, x+1) -1;
    
    if (startingPoint < n && arr[startingPoint] == x){
        return{startingPoint, endingPoint};
    }
    return{-1,-1};
}
