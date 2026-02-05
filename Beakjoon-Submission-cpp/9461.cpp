#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >>t;
    
    for (int j = 1; j <= t; ++j)
    {
        int n;
        cin >> n;
            
        long long dp[101];
        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 1;
        dp[4] = 2;
        dp[5] = 2;
        dp[6] = 3;
            
        for (int i = 7; i <= n; ++i) 
        {
            dp[i] = dp[i-1] + dp[i-5];
        }
            
        cout << dp[n] << endl;
    }
    
    return 0;
}
