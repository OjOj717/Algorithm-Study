#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    
    bool arr[5001] = {false};

    int a =0;
    int b = 0;
    int d = 0;
    bool e = true;
    
    while (a < n)
    {
        int c = 0;

        while (c < k)
        {
            if (e)
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
            else
            {
                b--;
                if (b < 1)
                {
                    b = n;
                }

                if (arr[b] == false)
                {
                    c++;
                }
            }
        }
        arr[b] = true;
        a++;

        
        d++;
        if (d % m == 0)
        {
            e = !e;
        }

        cout << b << endl;
    }

    return 0;
}