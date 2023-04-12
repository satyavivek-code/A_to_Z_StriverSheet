/*
           {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}}
           
*/



int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
    // code here
    int row = -1;
    int i = 0;
    int j = m-1;
    while (i < n && j >= 0){
        if (arr[i][j] == 1){
            j--;
            row = i;
        }
        if (arr[i][j] == 0){
            i++;
        }
    }
    return row;
}
