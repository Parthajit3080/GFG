class Solution {
  public:
    int countWays(int n, int k) {
        // code here
        if(n==0) return 0;
            if(n==1) return k;
            long long dp[n+1],mod=1000000007;

            dp[1]=k;
            dp[2]=(k*k)%mod;

            for(int i=3;i<=n;i++){
                dp[i]=(((dp[i-1]+dp[i-2])%mod)*(k-1))%mod;
            }

            return dp[n];
    }
};