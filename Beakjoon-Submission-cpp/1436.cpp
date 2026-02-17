#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long n, c;
string ans;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (long long i = 666; n > 0; i++)
    {
        ans = to_string(i);

        c = 0;
        for (long long j = 0; j < ans.length(); j++)
        {
            if (ans[j] == '6') c++;
            else c = 0;

            if (c == 3)
            {
                n--;
                break;
            }
        }
    }

    cout << ans;

    return 0;
}