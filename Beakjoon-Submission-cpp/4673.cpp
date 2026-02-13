#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long n, m;
bool arr[10050];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    fill(arr, arr + 10050, true);

    for (long long i = 1; i <= 10000; i++)
    {
        n = i;
        m = i;

        while (n > 0)
        {
            m += n % 10;
            n /= 10;
        }

        arr[m] = false;
    }

    for (long long i = 1; i <= 10000; i++)
    {
        if (arr[i] == true)
        {
            cout << i << "\n";
        }
    }

    return 0;
}