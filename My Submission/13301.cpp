#include <iostream>
using namespace std;

int main()
{
        long long n;
        cin >> n;
            
        long long dp[101];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 2;
        dp[4] = 3;
        dp[5] = 5;
        dp[6] = 8;
            
        for (int i = 7; i <= n; ++i) 
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
            
        cout << dp[n] * 4 + dp[n-1] * 2 << endl;
    
    return 0;
}