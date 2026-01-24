#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    
    for (int i = 1; i <= n; ++i)
    {
        for (int k = 1; k <= i; ++k)
        {
            cout << "*";
        }

        for (int j = 0; j < n - i; ++j)
        {
            cout << " ";
        }

        cout << endl;
    }
    
    return 0;
}