class Solution {
public:

    int rec(int i ,int j , vector<vector<int>> &dp){

        //base case
        if(i==0 && j == 0) return 1;
        if(i<0 || j<0) return 0;

        if(dp[i][j] != -1) return dp[i][j]; // already visited

        int up = rec(i-1,j,dp);
        int left = rec(i,j-1,dp);

        return dp[i][j] = up + left;
    }


    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1)); // -1 = Not visited

        return rec(m-1,n-1,dp) % (2 * 1000000000);
    }
};


// class Solution {
// private:
//     int f(int i, int j, vector<vector<int>> &dp){
//         if(i == 0 && j == 0) return 1;
//         if(i < 0 || j < 0) return 0;

//         if(dp[i][j] != -1) return dp[i][j];

//         int up = f(i-1, j, dp);
//         int left = f(i, j-1, dp);
//         return dp[i][j] = up + left;
//     }
// public:
//     int uniquePaths(int m, int n) {
//         vector<vector<int>> dp (m, vector<int>(n, -1));
//         return f(m-1, n-1, dp);
//     }
// };