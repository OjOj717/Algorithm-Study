#include <algorithm>
#include <iostream>
using namespace std;

 
long long arr[1000001];
long long path[1000001];

int main()
{
    long long x;
    cin >> x;
   
    arr[1] = 0;
    path[1] = 1;
    
    for (int i = 2; i <= x; ++i) 
    {
        arr[i] = arr[i - 1] + 1;
        path[i] = 1;
        
        if (i % 2 == 0)
        {
            if (arr[i / 2] + 1 < arr[i])
            {
                arr[i] = arr[i / 2] + 1;
                path[i] = 2;
            }
        }
        
        if (i % 3 == 0)
        {
            if (arr[i / 3] + 1 < arr[i])
            {
                arr[i] = arr[i / 3] + 1;
                path[i] = 3;
            }
        }
    }
    
    cout << arr[x] << endl;

    long long ans = x;
    cout << x << " ";
    while (ans > 1)
    {
        if (path[ans] == 1)
        {
            ans--;
            cout << ans << " ";
        }
        else if (path[ans] == 2)
        {
            ans /= 2;
            cout << ans << " ";
        }
        else
        {
            ans /= 3;
            cout << ans << " ";
        }
    }

    return 0;
}