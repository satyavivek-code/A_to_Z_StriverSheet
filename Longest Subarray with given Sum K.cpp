// brute force to find the largest subarray which equal to value k


#include<iostream>
using namespace std;

int longestSubarray(int arr[], int n, int k){
    
    int  maxlength = 0;

    for(int i = 0; i <n; i++){
        int sum = 0;
        for (int j = i; j < n; j++){
            sum += arr[j];
            if (sum == k){
                maxlength = max(maxlength,(j-i+1));
            }
        }
    }
    return maxlength;
}

int main(){
    int arr[4] = {7,1,6,0};
    int ans = longestSubarray(arr, 4, 7);

    cout << ans << endl;
    return 0;
}


// optimize code

