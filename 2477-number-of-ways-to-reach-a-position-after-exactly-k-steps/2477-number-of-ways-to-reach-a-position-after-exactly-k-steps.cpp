class Solution {
public:
  int dp[1000][1001];
  int mod=1e9+7;
  int dfs(int d, int k)
  {
    if(k==0)
     return d==0;

     if(d>k)
     return 0;
     if(dp[d][k]!=-1)
     {
        return dp[d][k];
     }
    int a=dfs(abs(d-1), k-1);
    int b=dfs(abs(d+1), k-1);
    dp[d][k]=(a+b)%mod;
    return dp[d][k];

  }
    int numberOfWays(int startPos, int endPos, int k) {
        memset(dp, -1, sizeof(dp));
        return dfs(abs(startPos-endPos), k);
      
    }
};