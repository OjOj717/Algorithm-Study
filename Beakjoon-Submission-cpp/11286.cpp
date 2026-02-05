#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

struct cmp 
{
    bool operator()(int a, int b) 
    {
        if (abs(a) == abs(b)) 
        {
            return a > b;
        }
        return abs(a) > abs(b);
    }
};

long long n, x;
priority_queue<long long, vector<long long>, cmp> pq;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (long long i = 0; i < n ; ++i)
    {
        cin >> x;

        if (x == 0)
        {
            if (pq.empty()) cout << 0 << endl;
            else
            {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
        else pq.push(x);
    }

    return 0;
}