#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long n;
string str;
bool chack;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    cin.ignore();

    for (long long i = 0; i < n; i++)
    {
        getline(std::cin, str);

        chack = true;
        for (int i = 0; i < str.length() / 2; i++) 
        {
            if (tolower(str[i]) != tolower(str[str.length() - 1 - i])) 
            {
                chack = false;
                break;
            }
        }

        if (chack) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}