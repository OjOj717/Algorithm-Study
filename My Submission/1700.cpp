#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long n, k, c, idx, far, nex, ans;
long long arr_n[101], arr_k[101];
bool chack;

int main()

{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;

    for (long long i = 1; i <= k; ++i)
    {
        cin >> arr_k[i];
    }

    for (long long i = 1; i <= k; ++i)
    {
        chack = false;
        for (long long j = 1; j <= n; ++j)
        {
            if (arr_k[i] == arr_n[j])
            {      
                chack = true;
                break;
            }
        }

        if (chack == true)
        {
            continue;
        }

        if (c < n)
        {
            arr_n[++c] = arr_k[i];
        }

        else
        {
            idx = -1;
            far = -1;

            for (long long j = 1; j <= n; ++j)
            {
                nex = 1e9;

                for (long long l = i + 1; l <= k; ++l)
                {
                    if (arr_n[j] == arr_k[l])
                    {
                        nex = l;
                        break;
                    }
                }

                if (nex > far)
                {
                    far = nex;
                    idx = j;
                }
            }

            arr_n[idx] = arr_k[i];
            ans++;
        }
    }

    cout << ans;

    return 0;
}