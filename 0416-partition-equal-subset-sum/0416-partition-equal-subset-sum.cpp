class Solution {
public:
    int solve(int i , vector<int>&nums, int target , int n,vector<vector<int>>&dp){

        if(target<0) return 0;
        if(i>=n) return 0;
        if(target==0) return 1;
        if(dp[i][target]!=-1) return dp[i][target];

        bool include = solve(i+1,nums,target-nums[i] , n,dp);
        bool exclude = solve(i+1,nums,target , n,dp);

        return dp[i][target] = include or exclude;
         

    }

    bool canPartition(vector<int>& nums) {

        int n = accumulate(nums.begin() , nums.end() , 0);
        if(n%2!=0) return false;
        int target = n/2;
        vector<vector<int>> dp(nums.size() , vector<int>(target+1,-1));

        return solve(0,nums,target,nums.size(),dp);
        
    }
};