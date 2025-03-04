class Solution {
public:
    string reverseWords(string s) {
         int l = 0, r = s.length() - 1;
        string temp = "", ans = "";

        while (l <= r) {
            if (s[l] != ' ') {
                temp += s[l];
            } 
            else if (!temp.empty()) 
            { // Add word only if temp is not empty
                if (!ans.empty())
                {
                    ans = temp + " " + ans;
                }
                else 
                {
                    ans = temp;
                }
                temp = "";
            }
            l++;
        }

        // Add the last word if it exists
        if (!temp.empty()) {
            if (!ans.empty()) ans = temp + " " + ans;
            else ans = temp;
        }

        return ans;
    }
};