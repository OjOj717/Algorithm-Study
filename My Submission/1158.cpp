#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    bool arr[5001] = {false};

    int a =0;
    int b = 0;
    
    while (a < n)
    {
        int c = 0;
        while (c < k)
        {
            b++;
            if (b > n)
            {
                b = 1;
            }

            if (arr[b] == false)
            {
                c++;
            }
        }
        arr[b] = true;
        a++;

        cout << b;
        if (a < n)
        {
            cout << ", ";
        }
        else if (a == n)
        {
            cout << ">";
        }
    }

    return 0;
}