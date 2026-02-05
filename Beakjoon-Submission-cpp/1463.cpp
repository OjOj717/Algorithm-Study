#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    
    int arr[x+1];
    arr[1] = 0;
    
    for (int i = 2; i <= x; ++i) 
    {
        arr[i] = arr[i - 1] + 1;
        
        if (i % 2 == 0)
        {
            arr[i] = min(arr[i], arr[i / 2] + 1);
        }
        
        if (i % 3 == 0)
        {
            arr[i] = min(arr[i], arr[i / 3] + 1);
        }
    }
    
    cout << arr[x];
    return 0;
}
