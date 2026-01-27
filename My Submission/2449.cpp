#include <iostream>
using namespace std;

long long num[201];
long long dp[201][201];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;

    for (long long i = 1; i <= n; ++i)
    {
        cin >> num[i];
    }

    for (long long d = 0; d <= n; ++d)
    {
        for (long long i = 1; i + d <= n; ++i)
        {
            long long j = i + d;
            dp[i][j] = 1e9;

            if (i == j)
            {
                dp[i][j] = 0;
            }
            else if (num[j] == num[i])
            {
                dp[i][j] = dp[i][j-1];
            }
            else
            {
                for (int l = i; l < j; ++l) {
                    dp[i][j] = min(dp[i][j], dp[i][l] + dp[l + 1][j] + 1);
                }
            }
        }        
    }

    cout << dp[1][n];

    return 0;
}