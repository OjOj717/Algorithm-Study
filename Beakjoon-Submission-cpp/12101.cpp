#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long n, k;
long long arr[12];
vector<long long> ans = {0};

int main()
{
    cin >> n >> k;
    
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
        
    for (int i = 4; i <= n; ++i) 
    {
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
    }

    if (k > arr[n]) 
    {
        cout << -1 << "\n";
        return 0;
    }

    while (n > 0)
    {
        for (int i = 1; i <= 3; i++)
        {
            if (n >= i)
            {
                if (k <= arr[n - i])
                {
                    ans.push_back(i);
                    n -= i;
                    break;
                }
                else k -= arr[n - i];
            }
        }
    }

    for (long long i = 1; i < ans.size(); i++) cout << ans[i] << (i == ans.size() - 1 ? "" : "+");
    
    return 0;
}
