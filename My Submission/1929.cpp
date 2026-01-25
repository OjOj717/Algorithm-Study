#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

long long num[1000001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long m, n;
    cin >> m >> n;

    num[0] = 0;
    num[1] = 0;

    for (long long i = 2; i <= n; ++i)
    {
        num[i] = i;
    }

    for (long long i = 2; i <= n; ++i)
    {
        for (long long j = i * 2; j <= n; j += i)
        {
            if (num[j] != i && num[j] % i == 0)
            {
                num[j] = 0;
            }
        }        
    }
    
    for (long long i = m; i <= n; ++i)
    {
        if (num[i] != 0)
        {
            cout << num[i] << "\n";
        }
    }

    return 0;
}