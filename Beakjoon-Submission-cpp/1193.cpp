#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long n, i;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    i = 1;
    while (n > i)
    {
        n -= i;
        i++;
    }

    if (i % 2 == 0)
    {
        cout << n << "/" << i - n + 1;
    }
    else
    {
        cout << i - n + 1 << "/" << n;
    }

    return 0;
}