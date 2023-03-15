/*
GFG
*/


int remove_duplicate(int a[],int n){

        int j = 0;
        for (int i = 1; i < n; i++){
            if(a[j] != a[i]){
                a[j+1] = a[i];
                j++;
            }
        }
        return (j+1);
    }
