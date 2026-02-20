#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int n, k, c;
int arr[11];

int i;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;

    for (i = 1; i <= n; i++) cin >> arr[i];

    c = 0;
    for (i = n; i >= 1; i--)
    {
        while (k >= 0)
        {
            k -= arr[i];
            c++;
        }

        if (k < 0) 
        {
            k += arr[i];
            c--;
        }
    }

    cout << c;

    return 0;
}