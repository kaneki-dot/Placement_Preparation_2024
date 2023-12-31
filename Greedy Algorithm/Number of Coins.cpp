class Solution{

	public:
	int solve(int nums[], int N, int x ){
	    vector<int>dp(x+1, INT_MAX);
	    dp[0]=0;
	    int mini= INT_MAX;
	    for(int i=1;i<=x;i++){
	        for(int j=0;j<N;j++){
	        if(i-nums[j]>=0 && dp[i-nums[j]]!=INT_MAX){
	            dp[i]=min(dp[i],1+dp[i-nums[j]]);
	            }
	        }
	    }
	    return dp[x];
	}
	
	int minCoins(int coins[], int M, int V) 
	{ 
	    int ans=solve(coins,M,V);
	    if(ans==INT_MAX) return -1;
	    else{
	        return ans;
	    }
	}
	  
};
