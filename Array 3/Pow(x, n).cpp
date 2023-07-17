class Solution {
public:
    
    double f(double x,int n)
    {
        if(n==0)
            return 1;
        long double res=f(x,n/2);
        if(n%2==0)
            return res*res;
        else 
            return res*res*x;
    }
    double myPow(double x, int n) {
        double res;
        res=f(x,abs(n));
        if(n<0)
        {
            return 1.0/res;
        }
        else
            return res;
    }
};
