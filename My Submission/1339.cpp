#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long n, ans;
string arr[11];
long long alphabet[2][26];

int main()

{
    cin >> n;

    for (long long i = 0; i < 26; ++i)
    {
        alphabet[0][i] = 0;
        alphabet[1][i] = 1e9;
    }

    for (long long i = 1; i <= n; ++i)
    {
        cin >> arr[i];

        for (long long j = 0; j < arr[i].length(); ++j)
        {
            alphabet[0][arr[i][j] - 'A'] += pow(10, arr[i].length() - j - 1);
        }
    }

    for (int i = 0; i < 26; i++) 
    {
        if (alphabet[0][i] != 0) 
        {
            int rank = 9;

            for (int j = 0; j < 26; j++) 
            {
                if ( i != j && alphabet[0][j] != 0) 
                {
                    if (alphabet[0][j] > alphabet[0][i]) 
                    {
                        rank--;
                    }

                    else if (alphabet[0][j] == alphabet[0][i] && j < i) 
                    {
                        rank--;
                    }
                }
                
            }
            
          alphabet[1][i] = rank;
        }
    }

    ans = 0;

    for (long long i = 1; i <= n; ++i)
    {
        for (long long j = 0; j < arr[i].length(); ++j)
        {
            ans += alphabet[1][arr[i][j] - 'A'] * pow(10, arr[i].length() - j - 1);
        }
    }

    cout << ans << endl;

    return 0;
}