#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    long long a = 1;
    long long dp = 1;

    while (a < n)
    { 
        a++;
        dp = (dp + k) % a;

        if (dp == 0) 
        {
            dp = a;
        }

        cout << dp;
    }

    return 0;
}