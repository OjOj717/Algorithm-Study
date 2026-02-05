#include <iostream>
#include <string>
using namespace std;

long long dp[2501];
long long palindrome[2501][2501];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    for (int i = 0; i <= str.length(); ++i)
    {
        dp[i] = 1e9;
        for (int j = 0; j <= str.length(); ++j)
        {
            palindrome[i][j] = 0;
        }
    }

    for (int d = 0; d <= str.length(); ++d)
    {   
        for (int i = 1; i <= str.length() - d; ++i)
        {
            int j = i + d;
            if (d == 0)
            {
                palindrome[i][j] = 1;
            }
            else if (i == j)
            {
                palindrome[i][j] = 1;
            }
            else if (str[i - 1] == str[j - 1] && palindrome[i + 1][j - 1] == 1)
            {
                palindrome[i][j] = 1;
            }
            else if (str[i - 1] == str[j - 1] && i + 1 == j)
            {
                palindrome[i][j] = 1;
            }
        }
    }

    dp[0] = 0;

    for (int i = 1; i <= str.length(); ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            if (palindrome[j][i] == 1)
            {
                dp[i] = min(dp[i], dp[j - 1] + 1);
            }
        }
    }

    cout << dp[str.length()];

    return 0;
}