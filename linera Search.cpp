/* 
linear search of an element in array 
*/

int searchInSorted(int arr[], int n, int k){
  for(int i = 0; i<n; i++){
    if(arr[i] == k){
      return 1;
    }
  }
  return -1;
}
