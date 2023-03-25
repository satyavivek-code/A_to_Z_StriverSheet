//brute force 
// varient [1]

#include<iostream>
using namespace std;

bool twoSum(int arr[], int n, int k)
{
    int sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 1; j < n; j++){
            if (arr[i] + arr[j] == k){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[] = {2,6,5,8,11};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target;
    cout << "enter the target value : " << endl ;
    cin >> target;

    bool result = twoSum(arr, size, target);
    cout <<"Is target value present in array or not : " << result << endl;

    return 0;
}

/*
varient [2]
*/
//brute force 

#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;


vector<int> twoSum(int arr[], int n, int k)
{
    vector <int> ans;
    int sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 1; j < n; j++){
            if (arr[i] + arr[j] == k){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return {-1,-1};
}

int main(){
    int arr[] = {2,6,5,8,11};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target;
    cout << "enter the target value : " << endl ;
    cin >> target;

  
    vector<int> result = twoSum(arr, size, target);
    cout <<"Is target value present in array or not : " ;
    cout << result[0] <<" "<< result[1] << endl;

    return 0;
}
