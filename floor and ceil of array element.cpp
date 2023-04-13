pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    int low = -1;
    int up = -1;
    for (int i = 0; i < n; i++){
        if (arr[i] <= x && (low == -1 || arr[i] > low)){
            low = arr[i];
        }
        if (arr[i] >= x && (up == -1 || arr[i] < up)){
            up = arr[i];
        }
    }
    return {low, up};
}
