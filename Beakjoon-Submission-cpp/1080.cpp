#include <iostream>
using namespace std;

long long n, m, ans;
bool a[51][51], b[51][51];

int main()

{
    scanf("%d %d", &n, &m);
    ans = 0;
    
    for (long long i = 1; i <= n; ++i)
    {
        for (long long j = 1; j <= m; ++j)
        {
            scanf("%1d", &a[i][j]);
        }
    }

    for (long long i = 1; i <= n; ++i)
    {
        for (long long j = 1; j <= m; ++j)
        {
            scanf("%1d", &b[i][j]);
        }
    }

    for (long long i = 1; i <= n - 2; ++i)
    {
        for (long long j = 1; j <= m - 2; ++j)
        {
            if (a[i][j] != b[i][j])
            {
                for (long long k = 0; k < 3; ++k)
                {
                    for (long long l = 0; l < 3; ++l)
                    {
                        a[i + k][j + l] = !a[i + k][j + l];
                    }
                }
                ans++;
            }
        }
    }

    for (long long i = 1; i <= n; ++i)
    {
        for (long long j = 1; j <= m; ++j)
        {
            if (a[i][j] != b[i][j])
            {
                cout << -1 << endl;
                return 0;
            }
        }
    }

    cout << ans << endl;

    return 0;
}