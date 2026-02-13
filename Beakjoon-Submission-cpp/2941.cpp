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
long long ans;
string arr[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> str;

    for(long long i = 0; i < 8; i++)
    {
        while (str.find(arr[i]) != std::string::npos)
        {
            str.replace(str.find(arr[i]), arr[i].length(), "A");
        }
    }

    cout << str.length();

    return 0;
}