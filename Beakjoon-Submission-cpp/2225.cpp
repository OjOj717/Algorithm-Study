#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    long long dp[201][201] = {0};

    for (int i = 0; i <= n; i++) {
        for (int j = 1; j <= k; j++) 
        {
            if (j == 1 || i == 0) 
            {
                dp[i][j] = 1;
            }
            
            else 
            {
                dp[i][j] = (dp[i][j-1] + dp[i - 1][j]) % 1000000000;
            }
        }
    }
        cout << dp[n][k] << endl;
    
    return 0;
}