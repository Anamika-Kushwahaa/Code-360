#include<bits/stdc++.h>
using namespace std;

int nthfib(int n, vector<int> &dp){
        //base case
        if(n<=1) return n;
        if(dp[n] != -1) return dp[n];

        dp[n] = nthfib(n-1,dp)+nthfib(n-2,dp);
        return dp[n];
}

int main()
{
        int n;
        cin>>n;
        vector<int> dp(n+1);
        for(int i=0 ; i<=n ; i++){
                dp[i] = -1;
        }
        cout<< nthfib(n,dp) << endl;
        return 0;
}
