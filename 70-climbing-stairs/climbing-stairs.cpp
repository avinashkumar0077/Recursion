//medium
class Solution {
public:

    int solve(int n, vector<int>& dp){

        // Base cases
        if(n == 0 || n == 1){
            return 1;
        }

        // Already calculated
        if(dp[n] != -1){
            return dp[n];
        }

        // Store and return
        dp[n] = solve(n - 1, dp) + solve(n - 2, dp);

        return dp[n];
    }

    int climbStairs(int n) {

        vector<int> dp(n + 1, -1);

        return solve(n, dp);
    }
};