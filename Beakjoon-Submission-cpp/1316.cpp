#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long n, c, ans;
bool alpha[27];
bool chack;
string str;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    ans = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> str;

        c = 1e9;
        chack = true;
        fill(alpha, alpha + 26, false);
        for (long long j = 0; j < str.length(); j++)
        {
            if ( str[j] != c )
            {
                if ( alpha[str[j] - 'a'] )
                {
                    chack = false;
                }
                else
                {
                    alpha[str[j] - 'a'] = true;
                }

                c = str[j];
            }
        }

        if(chack) ans++;
    }

    cout << ans;

    return 0;
}