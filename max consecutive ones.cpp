/*
Leetcode problem 
problem 485 -- Maximum consecutive of ones
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0 ;
        int maxlength = 0;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == 1){
                count++;
                if (count > maxlength){
                    maxlength++;
                }
            }
            else if (nums[i] == 0){
                count = 0;
            }   
        }
        return maxlength;
    }
};


/*
Maximum consecutive of 1 in vscode
*/



#include<iostream>
using namespace std;

int maxConsecutive(int arr[], int size){
    int count = 0;
    int maxlength = 0;
    // int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i< size;i++){
        if (arr[i] == 1){
            count++;
            if (maxlength < count){
                maxlength++;
            }
        }
        else if (arr[i] == 0) {
            count = 0;
        }

    }
    return maxlength;
}
int main(){
    int arr[6] = {1,1,0,1,1,1};
    int ans = maxConsecutive(arr, 6);
    cout << "The maximum number of consecutive 1 is : " << ans << endl;

    return 0;
}

/* 
gfg
*/

    int findZeroes(int arr[], int n, int m) {
        // code here
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++){
            if (arr[i] == 0){
                m--;
            }
            if(m < 0 && arr[j++] == 0){
                m++;
            }
            
        }
        return i-j;
    } 


// brute force

class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
        int countzero = 0;
        int ans = 0;
        int j = 0;
        int i = 0;
        while(i < n){
            if (arr[i] == 0){
                countzero++;
            }
            while (countzero < m){
                if (arr[j] == 0){
                    countzero--;
                }
            }
            ans = max(ans, i-j+1);
            i++;
            
        }
        return ans;
    }  
};
