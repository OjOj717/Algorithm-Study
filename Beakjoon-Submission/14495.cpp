#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
        
    long long arr[117];
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
        
    for (int i = 4; i <= n; ++i) 
    {
        arr[i] = arr[i-1] + arr[i-3];
    }
        
    cout << arr[n];

    return 0;
}