#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

string str;
long long ans, n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> str;

    for(long long i = 0; i<n; i++)
    {
        ans += str[i] - '0';
    }

    cout << ans;

    return 0;
}