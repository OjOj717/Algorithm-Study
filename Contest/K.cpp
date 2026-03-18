#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;
const long long INF = 1e18;

struct Node {
    long long min_val;
    long long lazy;
};

int n;
vector<long long> a;
vector<Node> tree;

void push(int node) {
    if (tree[node].lazy != 0) {
        tree[node * 2].min_val += tree[node].lazy;
        tree[node * 2].lazy += tree[node].lazy;
        tree[node * 2 + 1].min_val += tree[node].lazy;
        tree[node * 2 + 1].lazy += tree[node].lazy;
        tree[node].lazy = 0;
    }
}

void update(int node, int start, int end, int l, int r, long long val) {
    if (r < start || end < l) return;
    if (l <= start && end <= r) {
        tree[node].min_val += val;
        tree[node].lazy += val;
        return;
    }
    push(node);
    int mid = (start + end) / 2;
    update(node * 2, start, mid, l, r, val);
    update(node * 2 + 1, mid + 1, end, l, r, val);
    tree[node].min_val = min(tree[node * 2].min_val, tree[node * 2 + 1].min_val);
}

int find_first(int node, int start, int end, int limit) {
    if (tree[node].min_val > limit) return -1;
    if (start == end) return start;
    push(node);
    int mid = (start + end) / 2;
    int res = find_first(node * 2, start, mid, limit);
    if (res == -1) res = find_first(node * 2 + 1, mid + 1, end, limit);
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    a.resize(n + 1);
    tree.resize(4 * (n + 1), {INF, 0});
    for (int i = 1; i <= n; i++) cin >> a[i];

    vector<int> dp(n + 1, 0);
    stack<int> max_s, min_s;

    update(1, 0, n, 0, 0, -INF + 0);

    for (int i = 1; i <= n; i++) {
        while (!max_s.empty() && a[max_s.top()] <= a[i]) {
            int target = max_s.top();
            max_s.pop();
            int prev = max_s.empty() ? 0 : max_s.top();
            update(1, 0, n, prev, target - 1, a[i] - a[target]);
        }
        max_s.push(i);

        while (!min_s.empty() && a[min_s.top()] >= a[i]) {
            int target = min_s.top();
            min_s.pop();
            int prev = min_s.empty() ? 0 : min_s.top();
            update(1, 0, n, prev, target - 1, a[target] - a[i]);
        }
        min_s.push(i);

        int j = find_first(1, 0, n, i);
        dp[i] = dp[j] + 1;

        update(1, 0, n, i, i, -INF + i);
    }

    cout << dp[n];
    return 0;
}