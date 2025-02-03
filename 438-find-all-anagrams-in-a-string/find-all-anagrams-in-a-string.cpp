class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.length();
        int m = p.length();
        vector<int>ans;
        unordered_map<char,int>mp1;
        for(auto i:p)
        {
            mp1[i]++;
        }
        
        for(int i=0;i<=n-m;i++)
        {
            string str = s.substr(i,m);

            unordered_map<char,int>mp2;
            for(auto e:str)
            {
                mp2[e]++;
            }

            if(mp1 == mp2)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};