#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int n, m, x;
vector<int> a;

int i;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    a.resize(n);

    for ( i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    cin >> m;
    for ( i = 0; i < m; i++)
    {
        cin >> x;

        if ( binary_search(a.begin(), a.end(), x) ) cout << "1\n";
        else cout << "0\n";
    }

    return 0;
}