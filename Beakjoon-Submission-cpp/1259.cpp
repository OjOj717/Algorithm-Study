#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        string str;
        cin >> str;

        if (str == "0")
        {
            break;
        }

        int a = 0;
        while (a == 0)
        {
            for (int i = 0; i < str.length() / 2; i++) 
            {
                if (str[i] != str[str.length() - 1 - i]) 
                {
                    cout << "no" << endl;
                    a = 1;
                    break;
                }
            }
            if (a == 0)
            {
                cout << "yes" << endl;
            }
            break;
        }
        
    }
    
    return 0;
}