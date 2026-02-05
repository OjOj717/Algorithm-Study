#include <iostream>
using namespace std;;

int main()

{
    	int n;        
        cin >> n;

        long long a[41];

        a[0] = 0;
        a[1] = 1;
        a[2] = 1;

        for (int i = 3; i <= n; ++i) 
        {
            a[i] = a[i-1] + a[i-2];
        } 

        cout << a[n] << " " << n-2 << endl;

    return 0;

}