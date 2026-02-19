#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int i;
int t, n, m, f;
long long fact[31];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    f = 1;
    fact[0] = 1;
    for ( i = 1; i <= 30; i++)
    {
        f *= i;
        fact[i] = f;
    }

    cin >> t;
    for ( i = 1; i <= t; i++ )
    {
        cin >> n >> m;

        if ( n > m ) cout << fact[n] / ( fact[m] * fact[n - m] ) << "\n";
        else cout << fact[m] / ( fact[n] * fact[m - n] ) << "\n";
    }

    return 0;
}