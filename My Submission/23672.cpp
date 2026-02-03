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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> str;

    if (str.length() < 5)
    {
        cout << "not cute";
        return 0;
    }

    if (str[str.length() - 1] == 'p' && str[str.length() - 2] == 'i' && str[str.length() - 3] == 'i' && str[str.length() - 4] == 'r' && str[str.length() - 5] == 'd') cout << "cute";
    else cout << "not cute";
    
    return 0;
}