#include <iostream>
using namespace std;

long long n;
long long dp[5001];

int main()

{
    cin >> n;
    
    dp[0] = 1e9;
    dp[1] = 1e9;
    dp[2] = 1e9;
    dp[3] = 1;
    dp[4] = 1e9;
    dp[5] = 1; 
    dp[6] = 2;
    dp[7] = 1e9;

    for (long long i = 8; i <= n; ++i)
    {
        dp[i] = dp[i - 3] + 1;
        dp[i] = min(dp[i], dp[i - 5] + 1);
    }

    if (dp[n] >= 1e9)
    {
        dp[n] = -1;
    }

    cout << dp[n] << endl;

    return 0;
}