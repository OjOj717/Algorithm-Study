#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long n, m, c, ans;
stack<pair <long long, long long>> s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (long long i = 0; i < n; i++)
    {
        cin >> m;

        c = 1;
        while(!s.empty() && s.top().first < m)
        {
            ans += s.top().second;
            s.pop();
        }

        if (!s.empty())
        {
            if (s.top().first == m)
            {
                ans += s.top().second;
                c = s.top().second + 1;

                if (s.size() > 1) ans++;
                s.pop();
            }
            else ans++;
        }
        s.push({m, c});
    }

    cout << ans;

    return 0;
}