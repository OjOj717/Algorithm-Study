#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long n, x, d;
vector<long long> v, ans;
stack<long long> s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    v.resize(n);
    for (long long i = 0; i < n; ++i) cin >> v[i];

    ans.assign(n, -1);
    for (long long i = 0; i < n; ++i)
    {
        while (!s.empty() && v[s.top()] < v[i])
        {
            ans[s.top()] = v[i];
            s.pop();
        }
        s.push(i);
    }

    for (int i = 0; i < n; ++i) cout << ans[i] << (i == n - 1 ? "" : " ");

    return 0;
}