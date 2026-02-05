#include <iostream>
using namespace std;

int main()
{
    int r, c, w;
    cin >> r >> c >> w;
    
    long long dp[31][31] = {0};

    for (int i = 1; i <= r + w - 1; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            if (j == 1 || i == j) 
            {
                dp[i][j] = 1;
            }
            
            else 
            {
                dp[i][j] = (dp[i-1][j-1] + dp[i - 1][j]);
            }
        }
    }
    
    long long ans = 0;
    for (int i = r; i < r + w; i++) 
    {
        for (int j = c; j <= c + i - r; j++) 
        {
            ans += dp[i][j];
        }
    }

    cout << ans << endl;
    
    return 0;
}