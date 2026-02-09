#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long n, curr, nxt, ans;
bool is_prime[1000003], visited[1003];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    is_prime[0] = false;
    is_prime[1] = false;

    for (long long i = 2; i <= n; i++)
    {
        if (is_prime[i] = false) continue;

        for (long long j = i * i; j <= n; j++) is_prime[j] = false;
    }

    for (long long i = 2; i <= n; i++)
    {
        if (is_prime[i] = true)
        {
            for (long long j = 0; j < 1003; j++)
            {
                visited[j] = false;
            }
            curr = i;
            ans = false;

            while(true)
            {
                if (visited[curr] == true) break;

                visited[curr] = true;
                nxt = 0;

                while(curr > 0)
                {
                    nxt += (curr % 10) * (curr % 10);
                    curr /= 10;
                }

                curr = nxt;

                if (curr == 1)
                {
                    ans = true;
                    break;
                }
            }

            if (ans == true) cout << i << " ";
        }
    }
    return 0;
}