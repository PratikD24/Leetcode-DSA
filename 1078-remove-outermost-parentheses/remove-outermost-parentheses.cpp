class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        string str;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '(')
            {
                cnt++;
                if(cnt>1)
                {
                    str+=s[i];
                }
            }
            else
            {
                cnt--;
                if(cnt!=0)
                {
                    str+=s[i];
                }
            }
        }
        return str;
    }
};