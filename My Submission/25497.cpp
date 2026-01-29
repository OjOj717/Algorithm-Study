#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long n, c, lr, sk;
string m;

int main()

{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    cin >> m;

    lr = false;
    sk = false;
    for (long long i = 0; i < n; ++i)
    {
        if (m[i] >= '1' && m[i] <= '9') c++;
        else if (m[i] == 'L') lr++;
        else if (m[i] == 'S') sk++;
        else if (m[i] == 'R')
        {
            if (lr > 0) 
            {
                c++; 
                lr--;
            }
            else break;
        }
        else if (m[i] == 'K')
        {
            if (sk > 0) 
            {
                c++;
                sk--;
            }
            else break;
        }
    }

    cout << c;

    return 0;
}