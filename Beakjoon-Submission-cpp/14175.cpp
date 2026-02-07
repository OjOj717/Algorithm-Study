#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long m, n, k;
vector<string> arr;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n >> k;

    arr.resize(m);
    for (long long i = 0; i < m ; i++)
    {
        cin >> arr[i];
    }

    for (long long i = 0; i < m ; i++)
    { 
        for (long long x = 0; x < k; x++)
        {
            for (long long j = 0; j < n; j++)
            {
                for (long long y = 0; y < k; y++)
                {
                    cout << arr[i][j];
                }
            }
            cout << "\n";
        }
    }

    return 0;
}