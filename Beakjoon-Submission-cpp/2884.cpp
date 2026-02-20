#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int h, m;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> h >> m;

    m -= 45;

    if (m < 0)
    {
        h--;
        m += 60;
    }

    if (h < 0) h += 24;

    cout << h << " " << m;

    return 0;
}