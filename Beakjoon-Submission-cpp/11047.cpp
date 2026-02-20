#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int n, k, sum;
int arr[11];

int i;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;

    for (i = 1; i <= n; i++) cin >> arr[i];

    for (i = n; i >= 1; i--) cin >> arr[i];

    auto min_num = min_element(arr, arr + n);
    auto max_num = max_element(arr, arr + n);

    cout << *min_num << " " << *max_num;

    return 0;
}