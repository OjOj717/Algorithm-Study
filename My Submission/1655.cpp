#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

struct small
{
    bool operator()(long long a, long long b) 
    {
        return a < b;
    }
};

struct big
{
    bool operator()(long long a, long long b) 
    {
        return a > b;
    }
};

long long n, x, d;
priority_queue<long long, vector<long long>, small> s;
priority_queue<long long, vector<long long>, big> b;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (long long i = 0; i < n ; ++i)
    {
        cin >> x;
        
        if (s.size() <= b.size()) s.push(x);
        else b.push(x);
        if (!s.empty() && !b.empty() && s.top() > b.top())
        {
            d = s.top();
            s.pop();
            s.push(b.top());
            b.push(d);
            b.pop();
        }

        cout << s.top() << "\n";
    }

    return 0;
}