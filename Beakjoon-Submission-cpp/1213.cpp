#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    int counts[26] = {0, };
    for (int i = 0; i < str.length(); ++i)
    {
        char c = str[i];

        if ( c>= 'A' && c <= 'Z')
        {
            counts[c - 'A']++;
        }
    }

    if( str.length() % 2 == 0 )
    {
        for (int i = 0; i < 26; ++i)
        {
            if (counts[i] % 2 != 0)
            {
                cout << "I'm Sorry Hansoo" << endl;
                return 0;
            }
        }
    }
    else
    {
        int odd_count = 0;
        for (int i = 0; i < 26; ++i)
        {
            if (counts[i] % 2 != 0)
            {
                odd_count++;
            }
        }

        if (odd_count != 1)
        {
            cout << "I'm Sorry Hansoo" << endl;
            return 0;
        }
    }

    string first_half = "";
    char middle_char = '\0';
    for (int i = 0; i < 26; ++i)
    {
        if (counts[i] % 2 != 0)
        {
            middle_char = 'A' + i;
        }

        first_half += string(counts[i] / 2, 'A' + i);
    }

    string second_half = first_half;
    reverse(second_half.begin(), second_half.end());

    if (middle_char != '\0')
    {
        cout << first_half << middle_char << second_half << endl;
    }
    else
    {
        cout << first_half << second_half << endl;
    }

    return 0;
}