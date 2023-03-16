/*
Find out the missing number in array 
*/
#include<iostream>
using namespace std;

int missingNumber(int arr[], int n){
    int total_sum = (n*(n+1)/2);
    for (int i=0; i<n; i++){
        total_sum -= arr[i];
    }
    return total_sum;
}

int main()
{
    int arr[5] = {1,2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num = missingNumber(arr, n);
    cout << "Missing number : " << num << endl;
    return 0;
}
