#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long m, n, k, ans;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> k;

    ans = (m - 1 +( k - 3)) % n;
    if (ans < 0) ans += n;

    cout << ans + 1;

    return 0;
}