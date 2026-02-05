#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long t, a, b, c, ans;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    for (long long i = 0; i < t ; ++i)
    {
        cin >> a >> b >> c;

        ans = 0;
        for (long long x = 1; x <= a; x++)
        {
            for (long long y = 1; y <= b; y++)
            {
                for (long long z = 1; z <= c; z++)
                {
                    if (x % y == y % z && y % z == z % x) ans++;
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}