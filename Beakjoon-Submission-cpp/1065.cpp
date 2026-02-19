#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int i, j;
int n, c, ans;
string d;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    ans = 0;
    for (i = 1; i <= n; i++)
    {
        d = to_string(i);

        if (d.length() <= 2) ans ++;
        else
        {
            c = d[1] - d[0];

            for (j = 2; j < d.length(); j++)
            {
                if (d[j] - d[j-1] != c ) break;
            }

            if ( j == d.length() ) ans++;
        }
    }

    cout << ans;

    return 0;
}