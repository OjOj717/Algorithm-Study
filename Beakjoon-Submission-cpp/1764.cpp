#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

vector<string> l, v, d;
int n, m;

int i;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    l.resize(n);
    for ( i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    sort(l.begin(), l.end());

    v.resize(m);
    for ( i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    set_intersection(l.begin(), l.end(), v.begin(), v.end(), back_inserter(d));
    
    cout << d.size() << "\n";
    for (const string& ans : d) cout << ans << "\n";

    return 0;
}