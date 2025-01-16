class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>ans(n,0);

        if(k==0)
        {
            return ans;
        }
        int i=-1,j=-1;
        if(k>0)
        {
            i=1;
            j=k;
        }
        else
        {
            i = n - abs(k);
            j=n-1;
        }

        int windowsum = 0;
        for(int it=i;it <= j;it++)
        {
            windowsum+=code[it];
        }

        for(int k=0;k<n;k++)
        {
            ans[k] = windowsum;

            windowsum -=code[i%n];
            i++;

            windowsum+=code[(j+1)%n];
            j++;
        }

        return ans;
    }
};