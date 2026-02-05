#include <iostream>
using namespace std;

int main()

{
    long long t;
    cin >> t;

    for (long long i = 1; i <= t; ++i)
   {
    int n;
    cin >> n;
    
    cout << n/25 << " ";
    n %= 25;

    cout << n/10 << " ";
    n %= 10;

    cout << n/5 <<" ";
    n %= 5;

    cout << n << endl;
   }

    return 0;

}