#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long a, b, n;
long long arr[10000001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> b;

    n = a + 1000000 * b;

    arr[0] = 0;
    arr[1] = 0;

    for (long long i = 2; i <= n; ++i)
    {
        arr[i] = i;
    }

    for (long long i = 2; i <= n; ++i)
    {
        for (long long j = i * 2; j <= n; j += i)
        {
            if (arr[j] != i && arr[j] % i == 0)
            {
                arr[j] = 0;
            }
        }        
    }

    if (arr[n] != 0) cout << "Yes";
    else cout <<  "No";

    return 0;
}