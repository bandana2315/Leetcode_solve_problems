class Solution {
public:
    int lcs(string &s, string &str, int m, int n,
        vector<vector<int>>& dp)
{
    if (m == 0 || n == 0)
        return 0;
    if (s[m - 1] == str[n - 1])
        return dp[m][n] = 1 + lcs(s, str, m - 1, n - 1, dp);
 
    if (dp[m][n] != -1) {
        return dp[m][n];
    }
    return dp[m][n] = max(lcs(s, str, m, n - 1, dp),
                          lcs(s, str, m - 1, n, dp));
}
    int longestPalindromeSubseq(string s) {
        string str;
        str=s;
        reverse(s.begin(),s.end());
        int m,n;
        n=m=str.size();
        vector<vector<int> > dp(m + 1, vector<int>(n + 1, -1));
         return lcs(str, s, m, m, dp);
    }
};