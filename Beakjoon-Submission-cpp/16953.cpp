#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int a, b, c;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> b;

    c = 1;
    while (b > a)
    {
        if ( b % 2 == 0) b /= 2;
        else if ( b % 10 == 1) b /= 10;
        else break;
        c++;
    }

    if ( a == b ) cout << c;
    else cout << -1;

    return 0;
}