#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int n, d, ans;
vector<pair<int, int>> v;

int i;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    v.resize(n);
    for ( i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());

    d = v[0].second;
    ans = 1;
    for ( i = 0; i < n; i++)
    {
        if ( v[i].first > d)
        {
            d = v[i].second;
            ans++;
        }
    }

    cout << ans;

    return 0;
}