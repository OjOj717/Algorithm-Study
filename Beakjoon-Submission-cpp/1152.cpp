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
int ans;

int i;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    getline(cin, str);

    ans = 1;
    for ( i = 1; i < str.length() - 1; i++)
    {
        if ( str[i] == ' ' ) ans++;
    }

    if ( str == " ") ans = 0;

    cout << ans;

    return 0;
}