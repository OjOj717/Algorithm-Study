#include <iostream>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    
    cout << n * (k%10) << endl;
    cout << n * ((k/10)%10) << endl;
    cout << n * (k/100) << endl;
    cout << n * k << endl;

    return 0;
}