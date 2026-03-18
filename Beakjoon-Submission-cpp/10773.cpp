#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

long long k, n, ans;
stack<int> s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> k;

    for (int i = 0; i < k; i++) {
        cin >> n;

        if (n == 0) {
            if (!s.empty()) {
                s.pop();
            }
        } else {
            s.push(n);
        }
    }

    ans = 0;
    while (!s.empty()) {
        ans += s.top();
        s.pop();
    }

    cout << ans;

    return 0;
}