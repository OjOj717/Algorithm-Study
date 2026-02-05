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
bool arr[10000001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> b;

    n = a + 1000000 * b;

    fill(arr + 2, arr + n + 1, true);

    for (long long i = 2; i * i <= n; ++i)
    {
        for (long long j = i * i; j <= n; j += i)
        {
            arr[j] = false;
        }        
    }
    
    if (arr[n] && arr[a] ) cout << "Yes";
    else cout <<  "No";

    return 0;
}