#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

string str, d;
int ans;
bool m;

int i;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> str;

    ans = 0;
    m = false;
    d = "";

    for ( i = 0; i <= str.size(); i++)
    {
        if (str[i] == '+' || str[i] == '-' || i == str.size())
        {
            if(m) ans -= stoi(d);
            else ans += stoi(d);
            if (str[i] == '-') m = true;
            d = "";
        }

        else d += str[i];
    }

    cout << ans;

    return 0;
}