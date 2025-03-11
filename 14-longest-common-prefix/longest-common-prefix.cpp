class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string commonPrefix = strs[0];

        for(int i=0;i<strs.size();i++)
        {
            string word = strs[i];
            string newprefix = "";
            for(int j = 0;j<min(commonPrefix.size(),word.size());j++)
            {
                if(word[j] == commonPrefix[j])
                {
                    newprefix.push_back(word[j]);
                }else
                {
                    break;
                }
            }
            commonPrefix = newprefix;
        }
        return commonPrefix;
    }
};