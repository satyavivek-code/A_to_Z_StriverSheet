/*
STL concept for sorting vector 
--> sort(arr.begin(), arr.end())  <---
*/

int largest(vector<int> &arr, int n)
{
  sort(arr.begin(), arr.end());
  return (arr[n-1]);
}
