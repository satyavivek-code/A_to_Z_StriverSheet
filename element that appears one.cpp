/* 
gfg

this is the optimal solution to find out the unique number in array 
*/


int search(int A[], int N){
	    //code
	    int xorr = 0;
	    for (int i = 0; i<N ; i++){
	        xorr = xorr ^ A[i] ;
	    }
	    return xorr;
	    
	}
