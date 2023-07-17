class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1;
        int l_max=0,r_max=0,ans=0;
        while(l<r)
        {
            if(height[l]<height[r])
            {
                l_max=max(l_max,height[l]);
                ans+=l_max-height[l];
                l++;
            }
            else
            {
                r_max=max(r_max,height[r]);
                ans+=r_max-height[r];
                r--;
            }
        }
        return ans;
    }
};
