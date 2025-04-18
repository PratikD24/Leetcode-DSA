class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size()/2;
        for(auto e:nums)
        {
            mp[e]++;
        }

        for(auto e: mp)
        {
            if(e.second >n )
            {
                return e.first;
            }
        }
        return 0;
    }
};