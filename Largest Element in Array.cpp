/*
STL concept for sorting vector 
--> sort(arr.begin(), arr.end())  <---
*/

int largest(vector<int> &arr, int n)
{
  sort(arr.begin(), arr.end());
  return (arr[n-1]);
}


/*
Time complexity - O(N*log(N))
Space Complexity - O(N)
*/


/*
VS code
*/

#include<iostream>
using namespace std;
int maxValue (int arr[], int n){
    int max = arr[0];
    for (int i = 0; i < n; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[5] = {5,6,8,1,2};
    int max = maxValue(arr, 5);
    cout << "The largest element in array is : "<< max << endl;
    return 0;
}

/*
Time complexity - O(N)
Space Complexity - O(1)
*/
