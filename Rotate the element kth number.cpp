// rotate arrey by k element 
/*

temp[(i+k)%n] is important 
temp[(0+2)/5] == temp[2]
both of the above condition is same.

*/



#include<iostream>
using namespace std;
void rotatedArray (int arr[], int n, int k){
    int temp[n];
    for (int i = 0; i < n; i++){
        temp[i] = arr[i];
    }
    cout << "The rotated array is  : " <<  " ";
    for (int i = 0; i < n; i++){
        arr[i] = temp[(i+k) % n];
        
        cout << arr[i] << " ";

    }
    cout << endl;

}
int main()
{
    int arr[5] = {5,6,8,4,7};
    int size = 5;
    int k;
    cout << " The original array is  " << " ";
    for (int i = 0; i < size; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout <<"enter the position at which the element will be rotated : " << " ";
    cin >> k ;
    rotatedArray(arr, size, k);

    
    return 0;
}
