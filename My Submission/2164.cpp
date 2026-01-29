#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long n, c;
stack<long long> s;
vector<long long> m;
queue<char> ans;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    m.resize(n);
    
    for (long long i = 0; i < n; ++i) cin >> m[i];

    c = 1;
    for (long long i = 0; i < n; ++i)
    {
        while(c <= m[i])
        {
            s.push(c++);
            ans.push('+');
        }

        if (!s.empty() && s.top() == m[i])
        {
            s.pop();
            ans.push('-');
        }

        else
        {
            cout << "NO";
            return 0;
        }
    }

    while (!ans.empty()) 
    {
        cout << ans.front() << "\n";
        ans.pop();
    }

    return 0;
}