class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int totalSum = 0;
        for(auto e:nums)
        {
            totalSum+=e;
        }
        int ls=0;
        int rs = 0;
        int cumus = 0;
        for(int i=0;i<nums.size();i++)
        {
            ls = cumus;
            rs = totalSum - cumus - nums[i];

            if(ls == rs)
            {
                return i;
            }
            cumus += nums[i];
            
        }
        return -1;
    }
};