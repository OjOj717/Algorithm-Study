#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

long long num[1003002];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    num[0] = 0;
    num[1] = 0;

    for (long long i = 2; i <= 1003002; ++i)
    {
        num[i] = i;
    }

    for (long long i = 2; i <= 1003002; ++i)
    {
        for (long long j = i * 2; j <= 1003002; j += i)
        {
            if (num[j] != i && num[j] % i == 0)
            {
                num[j] = 0;
            }
        }        
    }
    
    int a = 0;
    while (n <= 1003002)
    {
        if (num[n] != 0)
        {
            long long k = num[n];
            long long original = k;
            long long reversed = 0;

            while (k > 0)
            {
                reversed = reversed * 10 + k % 10;
                k /= 10;
            }

            if (original == reversed)
            {
                cout << num[n];
                break;
            }
        }

        n++;
    }

    return 0;
}