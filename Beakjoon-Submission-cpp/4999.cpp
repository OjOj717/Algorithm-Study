#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

string a, h;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> h;

    if(a.length() >= h.length()) cout << "go";
    else cout << "no";

    return 0;
}