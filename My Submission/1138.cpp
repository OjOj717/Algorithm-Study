#include <iostream>
using namespace std;

long long n, k;
long long ans[11];

int main()

{
    cin >> n;
    
    for(int i = 0; i < 11; i++) 
    {
        ans[i] = 1e9;
    }

    for (long long i = 1; i <= n; ++i)
    {
        cin >> k;

        for (long long j = 1; j <= n; ++j)
        {
            if (k == 0 && ans[j] == 1e9)
            {
                ans[j] = i;
                break;
            }

            else if (ans[j] == 1e9)
            {
                k--;
            }
        }
    }
    
    for (long long i = 1; i <= n; ++i)
    {
        cout << ans[i] << " ";
    }

    return 0;
}