#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long u, n, mn, price;
long long cnt[10001];
string name[10001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> u >> n;

    for (int i = 0; i < n; i++) 
    {
        string s;
        int p;
        cin >> s >> p;

        if (p <= u) {
            if (cnt[p] == 0) {
                name[p] = s;
            }
            cnt[p]++;
        }
    }

    mn = 100001;
    price = -1;

    for (int i = 1; i <= u; i++) 
    {
        if (cnt[i] > 0 && cnt[i] < mn) {
            mn = cnt[i];
        }
    }

    for (int i = 1; i <= u; i++) {
        if (cnt[i] == mn) {
            price = i;
            break; 
        }
    }

    cout << name[price] << " " << price << endl;

    return 0;
}