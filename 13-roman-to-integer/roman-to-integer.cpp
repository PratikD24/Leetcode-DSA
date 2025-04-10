class Solution {
public:

    int chartonum(char c)
    {
        switch(c)
        {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default : return 0;
        }
    }
    int romanToInt(string s) {
        int ans =0;
        for(int i = 0;i<s.length();i++)
        {
            if(i+1 < s.length() && chartonum(s[i]) < chartonum(s[i+1]))
            {
                ans = ans - chartonum(s[i]);
            }
            else
            {
                ans += chartonum(s[i]);
            }
        }

        return ans;
    }
};