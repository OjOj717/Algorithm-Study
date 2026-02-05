#include <iostream>
using namespace std;

long long n, ans;
long long road[100002], liter[100002];

int main()

{
    cin >> n;
    
    for (long long i = 1; i < n; ++i)
    {
        cin >> road[i];
    }

    for (long long i = 1; i <= n; ++i)
    {
        cin >> liter[i];
    }

    for (long long i = 1; i < n; ++i)
    {
        ans += liter[i] * road[i];

        if (liter[i + 1] > liter[i])
        {
            liter[i + 1] = liter[i];
        }
    }

    cout << ans << endl;

    return 0;
}