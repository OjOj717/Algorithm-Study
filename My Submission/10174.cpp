#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long n, len;
string str;
bool check;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    cin.ignore();

    for (long long i = 0; i < n; i++)
    {
        getline(std::cin, str);

        len = str.length();
        check = true;
        for (long long j = 0; j < len / 2; j++) 
        {
            if (tolower(str[j]) != tolower(str[len - 1 - j])) 
            {
                check = false;
                break;
            }
        }

        if (check) cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }
    return 0;
}