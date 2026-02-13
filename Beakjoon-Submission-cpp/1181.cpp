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
vector <string> v;

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

    std::sort(v.begin(), v.end());
    v.erase(std::unique(v.begin(), v.end()), v.end());

    sort(v.begin(), v.end(), [](const std::string& a, const std::string& b)
    {
        if (a.length() != b.length())
        {
            return a.length() < b.length();
        }
        return a < b;
    });

    for (long long i = 0; i < v.size(); ++i)
    {
        cout << v[i] << "\n";
    }

    return 0;
}