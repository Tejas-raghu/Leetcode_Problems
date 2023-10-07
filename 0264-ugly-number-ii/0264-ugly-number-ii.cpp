class Solution {
public:
    int nthUglyNumber(int n) {
        
        vector<int> dp(n);
        dp[0]=1;
        int c2=0 , c5=0 , c3=0 ;

        for(int i=1 ; i<n ; i++){
            dp[i] = min(2*dp[c2] , min(3*dp[c3] , 5*dp[c5]));
            if(dp[c2]*2 == dp[i]) c2++;
            if(dp[c3]*3 == dp[i]) c3++;
            if(dp[c5]*5 == dp[i]) c5++;
        }
        return dp[n-1];
    }
};