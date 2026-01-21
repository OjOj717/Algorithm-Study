#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >>t;
    
    for (int j = 1; j <= t; ++j)
    {
        int n;
        cin >> n;
        
        int zero[n+1];
        int one[n+1];
        
        zero[0] = 1;
        zero[1] = 0;
        zero[2] = 1;
            
        one[0] = 0;
        one[1] = 1;
        one[2] = 1;
            
        for (int i = 3; i <= n; ++i) 
        {
            zero[i] = zero[i-1] + zero[i-2];
            one[i] = one[i-1] + one[i-2];
        }
            
        cout << zero[n] << " " << one[n] << endl;
    }
    
    return 0;
}
