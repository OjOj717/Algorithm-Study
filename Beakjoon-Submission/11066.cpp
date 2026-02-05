#include <iostream>
using namespace std;

long long dp[501][501];
long long file[501];
long long sum[501];

int main()
{
    long long t;
    cin >> t;
    
    for (int test_case = 0; test_case < t; ++test_case)
    {
        long long k;
        cin >> k;
        
        for (int i = 1; i <= k; ++i)
        {
            cin >> file[i];

            sum[i] = sum[i - 1] + file[i];

            for (int j = 1; j <= k; ++j) 
            {
                    dp[i][j] = 1e15;
            }
            dp[i][i] = 0;
        }
        
        

        for (int i = 1; i < k; ++i)
        {
            for (int j = 1; j <= k - i; ++j)
            {
                for (int m = j; m < j + i; ++m)
                {
                    dp[j][j+i] = min(dp[j][j+i], dp[j][m] + dp[m + 1][j+i] + sum[j+i] - sum[j - 1]);
                }
            }
        }

        cout << dp[1][k] << endl;
    }
    
    return 0;
}