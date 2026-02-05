#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long n, m;
vector<int> v;

int main()

{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (long long i = 1; i <= n; ++i)
    {
        cin >> m;

        v.insert(v.end() - m, i);
    }

    cout << v[0];
    for (long long i = 1; i < n; ++i)
    {
        cout << " " << v[i];
    }

    return 0;
}