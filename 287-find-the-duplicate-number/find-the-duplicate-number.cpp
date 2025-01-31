class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto n:nums)
        {
            mp[n]++;
        }

        for(auto e:nums)
        {
            if(mp[e] > 1)
            {
                return e;
            }
        }

        return 0;
    }
};