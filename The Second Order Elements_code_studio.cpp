


int secondLargest(vector<int>a, int n){
    int largest = a[0];
    int slargest = -1;

    for(int i = 0; i <n; i++){
        if (a[i] > largest){
            slargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > slargest){
            slargest = a[i];
        }
    }
    return slargest;
}

int secondSmallest(vector<int>a, int n){
    int smallest = INT_MAX;
    int ssmallest = INT_MAX;



    for (int i = 0; i < n; i++){
        if (a[i] < smallest){
            ssmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] != smallest && a[i] < ssmallest){
            ssmallest = a[i];
        }
    }
    return ssmallest;
}



vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int slargest = secondLargest(a, n);
    int ssmallest = secondSmallest(a,n);

    return{slargest, ssmallest};
}


/* 
VSCODE implementation
*/

// find second smallest and largest element in the array


#include<iostream>
#include<bits/stdtr1c++.h>
#include<vector>

using namespace std;

int secondLargest(int a[], int n){
    int largest = INT_MIN;
    int slargest = INT_MIN;

    for (int i = 0; i < n; i++){
        if (a[i] > largest){
            slargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > slargest){
            slargest = a[i];
        }
    }
    return slargest;
}

int secondSmallest(int a[], int n){
    int smallest = INT_MAX;
    int ssmallest = INT_MAX;

    for (int i = 0; i<n; i++){
        if (a[i] < smallest){
            ssmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] != smallest && a[i] < ssmallest){
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

int main()
{
    int a[5] = {5,6,7,8,2};
    int slargest = secondLargest(a,5);
    int secsmallest = secondSmallest(a,5);

    cout << " The second largest element in the array is : " << slargest << endl;
    cout << " The second smallest element in the array is : " << secsmallest << endl;

}
