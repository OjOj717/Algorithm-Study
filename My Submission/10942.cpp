#include <iostream>
using namespace std;

long long dp[2001][2001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long num[2001];
    for (int i = 1; i <= n; ++i)
    {
        cin >> num[i];
    }

    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= n; ++j)
        {
            dp[i][j] = 0;
        }
    }

    for (int d = 0; d <= n; ++d)
    {   
        for (int i = 1; i <= n - d; ++i)
        {
            int j = i + d;
            if (d == 0)
            {
                dp[i][j] = 1;
            }
            else if (i == j)
            {
                dp[i][j] = 1;
            }
            else if (num[i] == num[j] && dp[i + 1][j - 1] == 1)
            {
                dp[i][j] = 1;
            }
            else if (num[i] == num[j] && i + 1 == j)
            {
                dp[i][j] = 1;
            }
        }
    }

    long long m;
    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        long long a, b;
        cin >> a >> b;

        cout << dp[a][b] << "\n";
    }
    
    return 0;
}