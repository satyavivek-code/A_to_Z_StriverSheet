/*
with the swapping we can swap all non zero value to zero value of array.
*/

	void pushZerosToEnd(int arr[], int n) {
	    int nonZeros = 0;
	    for (int j = 0; j < n; j++){
	        if (arr[j] != 0){
	            swap(arr[j], arr[nonZeros]);
	            nonZeros++;
	        }
	    }
	}
