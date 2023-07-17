    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	
    	sort(arr, arr +n);
    	sort(dep, dep +n);
    	
    	int i = 1; 
    	int j = 0;
    	
    	int platf = 1;
    	int ans = -1;
    	
    	while(i < n && j < n){
    	    
    	    if(arr[i] <= dep[j]){
    	        platf++;
    	        i++;
    	    }
    	    
    	    else if(arr[i] > dep[j]){
    	        j++;
    	        platf--;
    	    }
    	    
    	    if(platf > ans) ans = platf;
    	}
    	
    	return ans; 
    }
};
