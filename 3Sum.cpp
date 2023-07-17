class Solution {
public:
    
    bool binarysearch(vector<int>nums,int l,int r,int key)
    { 
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==key)
                return 1;
            else if(nums[mid]>key)
                r=mid-1;
            else
                l=mid+1;
        }
        return 0;
    }
    
    int _binarysearch(vector<int>nums,int l,int r,int key)
    {
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==key)
                return mid;
            else if(nums[mid]>key)
                r=mid-1;
            else
                l=mid+1;
        }
        return -1;
    }
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int z=0-(nums[j]+nums[i]);
                if(binarysearch(nums,j+1,nums.size()-1,z));
                {
                    vector<int>b;
                    b.push_back(nums[i]);
                    b.push_back(nums[j]);
                    b.push_back(_binarysearch(nums,j+1,nums.size()-1,z));
                    res.push_back(b);
                }
            }
        }
        return res;
    }
};
