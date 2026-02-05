#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

string str;
long long n, c;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for(long long i = 0; i<n; i++)
    {
        cin >> str;

        c = 0;
        for (long long j = 0; j < str.length(); j++)
        {
            if (str[j] == '(') c++;
            else if (str[j] == ')') c--;

            if (c<0) break;
        }

        if (c<0) cout << "NO" << "\n";
        else if (c == 0) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    return 0;
}