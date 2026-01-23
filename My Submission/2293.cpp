#include <iostream>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    long long dp[10001] = {0};
    dp[0] = 1;
    
    for (int i = 1; i <= n; ++i)
    {
        long long coin;
        cin >> coin;

        if (coin <= k)
        {
            for (int j = coin; j <= k; ++j)
            {
                dp[j] += dp[j - coin];
            }
        }
    }

    cout << dp[k] << endl;
    
    return 0;
}