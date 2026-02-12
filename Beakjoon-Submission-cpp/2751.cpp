#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long n;
vector <long long> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    v.resize(n);

    for (long long i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (long long i = 0; i < n; ++i)
    {
        cout << v[i] << "\n";
    }

    return 0;
}