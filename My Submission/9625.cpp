#include <iostream>
using namespace std;

int main()
{
        long long n;
        cin >> n;
            
        long long dp[36] = {0};

        dp[0] = 1;

        for(int i = 1; i <= n; ++i) 
        {
            for (int j = 1; j <= i; ++j) 
            {
                dp[i] += dp[j - 1] * dp[i - j];            
            }
        }

        cout << dp[n] << endl;

    return 0;
}