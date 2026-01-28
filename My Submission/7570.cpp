#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long n, m, ans;
long long dp[1000001];

int main()

{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (long long i = 1; i <= n; ++i)
    {
        cin >> m;
        dp[m] = dp[m - 1] + 1;
        ans = max(ans, dp[m]);
    }

    cout << n - ans << endl;

    return 0;
}