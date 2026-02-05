#include <iostream>
using namespace std;
const int INF = 1e9;

int main()
{
    long long n, k;
    cin >> n >> k;

    long long dp[10001];
    int c[100001] = {0};

    for (int i = 1; i <= k; i++) dp[i] = INF;
    dp[0] = 0;
    
    for (int i = 1; i <= n; ++i)
    {
        long long coin;
        cin >> coin;

        if (c[coin] == 0)
        {
            if (coin <= k)
            {
                for (int j = coin; j <= k ; ++j)
                {
                    if( dp[j - coin] != INF )
                    {
                        dp[j] = min(dp[j], dp[j - coin] + 1);
                    }
                }
            }
            c[coin] = 1;
        }
        
    }

    for (int i = 1; i <= k; ++i)
    {
        if (dp[i] == INF)
        {
            dp[i] = -1;
        }
    }

    cout << dp[k] << endl;
    
    return 0;
}