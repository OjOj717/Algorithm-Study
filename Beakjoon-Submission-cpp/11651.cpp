#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

struct Data 
{
    long long a;
    long long b;

    bool operator<(const Data& other) const 
    {                
        if (b != other.b) return b < other.b;
        return a < other.a;
    }
};

long long n;
vector<Data> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    v.resize(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i].a >> v[i].b;
    }

    sort(v.begin(), v.end());

    for (const auto& p : v) 
    {
        std::cout << p.a << " " << p.b << "\n";
    }

    return 0;
}