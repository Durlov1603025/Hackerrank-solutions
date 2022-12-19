vector<int> longestCommonSubsequence(vector<int> a, vector<int> b) {
    int n = a.size();
    int m = b.size();
    int i,j;
    vector<int> result;
    int dp[n+1][m+1];
    
    for(i=0; i<=n; i++)
    {
        dp[i][0] = 0;
    }
    for(i=0; i<=m; i++)
    {
        dp[0][i] = 0;
    }
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(a[i-1] == b[j-1])
            {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else {
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
        }
    }
    
    i=n;
    j=m;
    
    while (i>0 && j>0) {
        if(a[i-1] == b[j-1])
        {
            result.push_back(a[i-1]);
            i--;
            j--;
        }
        else
        {
            if(dp[i][j-1] > dp[i-1][j])
            {
                j--;
            }
            else 
            i--;
        }
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}
