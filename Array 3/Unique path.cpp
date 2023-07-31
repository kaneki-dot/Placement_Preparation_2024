class Solution {
public:
    int uniquePaths(int m, int n) {
        // vector<long long>fact(m+n-1);
        // fact[0]=1;
        // for(int i=1;i<m+n-1;i++)
        //     {
        //         fact[i]=i*fact[i-1];
        //     }
        // return fact[m+n-2]/(fact[m-1]*fact[n-1]);
        double f1 = lgamma(m+n-1);
        double f2 = lgamma(m);
        double f3 = lgamma(n);
        double f4 = f2+f3;
        double f5 = f1-f4;
        return round(exp(f5));

    }
};
