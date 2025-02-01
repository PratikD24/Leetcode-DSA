class Solution {
public:
    bool isvowels(char ch)
    {
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    int maxVowels(string s, int k) {
        int n = s.length();
        int i=0;
        int j=0;

        int maxv = 0;
        int count = 0;

        while(j<n)
        {
            if(isvowels(s[j]))
            {
                count++;
            }
            if(j-i+1 == k)
            {
                maxv = max(maxv,count);
                 if(isvowels(s[i]))
                {
                    count--;
                }
                i++;
            }
            j++;
        }
        return maxv;
    }
};