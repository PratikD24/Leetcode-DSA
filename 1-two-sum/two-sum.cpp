class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int>mp;

        for(int i= 0; i<nums.size();i++)
        {
            mp[nums[i]] = i;
        }
        vector<int>ans(2);

        for(int i=0;i<nums.size();i++)
        {
            
                int next = target - nums[i];

                if(mp.find(next) != mp.end() && mp[next] != i)
                {
                    ans[0] = i;
                    ans[1] = mp[next];
                    return ans;
                }
        }

        return {};
    }
};