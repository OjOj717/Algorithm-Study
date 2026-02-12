#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long n, m;
string str;
stack <long long> s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (long long i = 0; i < n; ++i)
    {
        cin >> str;

        if (str == "push")
        {
            cin >> m;
            s.push(m);
        }

        else if ( str == "pop" )
        {
            if (s.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << s.top() << "\n";
                s.pop();
            }
        }

        else if (str == "size")
        {
            cout << s.size() << "\n";
        }

        else if (str == "empty")
        {
            if (s.empty()) cout << "1\n";
            else cout << "0\n";
        }

        else if (str == "top")
        {
            if (s.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << s.top() << "\n";
            }
        }
    }

    return 0;
}