class Solution {
public:
    int firstUniqChar(string s) {
        int hash[26]={0};

        for(auto e:s)
        {
            hash[e-'a']++;
        }
        for(int i =0;i<s.length();i++)
        {
            char ch = s[i];

            if(hash[ch - 'a'] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};