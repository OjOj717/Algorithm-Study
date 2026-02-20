#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int n;
int arr[1000001];

int i;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (i = 0; i < n; i++) cin >> arr[i];

    auto min_num = min_element(arr, arr + n);
    auto max_num = max_element(arr, arr + n);

    cout << *min_num << " " << *max_num;

    return 0;
}