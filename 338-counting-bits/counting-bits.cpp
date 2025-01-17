class Solution {
public:
    vector<int> countBits(int n) {
        //O(n) solution
        vector<int>ans(n+1,0);

        for(int i=0;i<=n;i++)
        {
            if(i%2 == 0)
            {
                ans[i] = ans[i/2];
            }
            else
            {
                ans[i]= ans[i/2]+1;
            }
        }
        return ans;

        //n*log(n)

        // for(int i=0;i<=n;i++)
        // {
        //     int num = i;
        //     int count = 0;

        //     while(num)
        //     {
        //         count += num%2 ;
        //         num = num/2;
        //     }
        //     ans[i] = count;
        // }
        // return ans;



    }
};