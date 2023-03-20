


#include<iostream>
#include<vector>
#include<set>

using namespace std;

/*
  Find the Union of the two sorted array 
*/

void findUnions(int ar1[], int ar2[], int n, int m){
    vector<int>Unions;
    set<int>s;

    for (int i = 0; i <n; i++){
        s.insert(ar1[i]);
    }
    for (int i = 0; i <m; i++){
        s.insert(ar2[i]);
    }
    cout <<"The Union of two sorted array is : " << endl;
    for (auto &i : s){
        Unions.push_back(i);
        cout << Unions[i] << " ";
    }cout << endl;
    
}


/*
  Find the intersection of the two sorted array 

*/

void findIntersection(int ar1[], int ar2[], int n, int m){
    int a = 0;
    int b = 0;
    vector<int> ans;

    while (a < n && b < m){
        if (ar1[a] < ar2[b]){
            a++;
        } 
        else if (ar2[b] < ar1[a]){
            b++;
        }
        else {
            ans.push_back(ar1[a]);
            a++;
            b++;
        }
    }
    for (auto &i:ans){
        cout << ar1[i] << " " ;
    }
}

int main()
{
    int ar1[5] = {0,1,2,3,4};
    int ar2[4] = {1,1,2,5};
    findUnions(ar1, ar2, 5, 4);
    findIntersection(ar1, ar2, 5, 4);

    

    return 0;
}
