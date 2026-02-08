#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long r, c, k, br, bc, ar, ac, at;
bool chack;
bool arr[1003][1003];
long long turn[4];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> r >> c;
    for (long long i = 0; i < r; i++)
    {
        for (long long j = 0; j < c; j++)
        {
            arr[i][j] = true;
        }
    }

    cin >> k;
    for (long long i = 0; i < k ; i++)
    {
        cin >> br >> bc;

        arr[br][bc] = false;
    }

    cin >> ar >> ac;
    arr[ar][ac] = false;

    cin >> turn[0] >> turn[1] >> turn[2] >> turn[3];
    at = 0;

    while(true)
    {
        chack = false;

        for (long long i = 0; i < 4; i++)
        {
            if(turn[at] == 1)
            {
                if ( ar - 1 >= 0 && arr[ar - 1][ac] == true )
                {
                    ar--;
                    arr[ar][ac] = false;
                    chack = true;
                    break;
                }

                else at = (at + 1) % 4;
            }

            else if(turn[at] == 2)
            {
                if ( ar + 1 < r && arr[ar + 1][ac] == true )
                {
                    ar++;
                    arr[ar][ac] = false;
                    chack = true;
                    break;
                }

                else at = (at + 1) % 4;
            }

            else if(turn[at] == 3)
            {
                if ( ac - 1 >= 0 && arr[ar][ac - 1] == true )
                {
                    ac--;
                    arr[ar][ac] = false;
                    chack = true;
                    break;
                }

                else at = (at + 1) % 4;
            }

            else if(turn[at] == 4)
            {
                if ( ac + 1 < c && arr[ar][ac + 1] == true )
                {
                    ac++;
                    arr[ar][ac] = false;
                    chack = true;
                    break;
                }

                else at = (at + 1) % 4;
            }
        }

        if (chack == false) break;
        else continue;
    }

    cout << ar << " " << ac;

    return 0;
}