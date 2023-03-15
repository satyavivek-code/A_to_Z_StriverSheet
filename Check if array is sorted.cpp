/*
Recursively
*/

bool arraySortedOrNot(int arr[], int n) {
        if (n <2){
            return true;
        }
        // code here
        if (arr[n-1] < arr[n-2]){
            return false;
        }
        return arraySortedOrNot(arr, n-1);
    }
