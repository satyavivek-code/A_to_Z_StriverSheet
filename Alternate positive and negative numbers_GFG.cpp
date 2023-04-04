	void rearrange(int arr[], int n) {
	    // code here4
	    
	    vector<int>v1 ,v2, ans;
	    for(int i = 0; i < n; i++){
	        if (arr[i] >= 0){
	            v1.push_back(arr[i]);
	        }
	        else{
	            v2.push_back(arr[i]);
	        }
	    }
	    int i = 0;
	    int j = 0;
	    int k = 0;
	    while(i < v1.size() && j < v2.size()){
	        arr[k++] = v1[i];
	        i++;
	        arr[k++] = v2[j];
	        j++;
	    }
	    while(i<v1.size()){
	        arr[k++] = v1[i];
	        i++;
	    }
	    while(j < v2.size()){
	        arr[k++] = v2[j];
	        j++;
	    }
	}
