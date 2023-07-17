class Solution {
public:
   
    int removeDuplicates(vector<int>& nums) {
        
      int n= nums.size();
        // i at 0 and j at i+1
        int i=0;
        int j=i+1;
        
        //while j reaches end
        while(j<n)
        {
            //if equal then only increasing j
            if(nums[i]==nums[j])
            {
                j++;
            }
            else
            {
                //if not then first increasing i and copying the value at j to i 
                i++;
                nums[i]=nums[j];
            }
        }
        return (i+1);

    }
};
