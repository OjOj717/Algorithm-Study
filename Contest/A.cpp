#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

struct Person {
    int id;
    int score;
};

bool comparePerson(const Person& a, const Person& b) {
    return a.score < b.score;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    vector<vector<int>> scores(N, vector<int>(K));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            cin >> scores[i][j];
        }
    }

    vector<bitset<2000>> possible_dominators(N);
    for (int i = 0; i < N; i++) {
        possible_dominators[i].set(); 
    }

    for (int k = 0; k < K; k++) {
        vector<Person> current_metric(N);
        for (int i = 0; i < N; i++) {
            current_metric[i] = {i, scores[i][k]};
        }
        sort(current_metric.begin(), current_metric.end(), comparePerson);

        bitset<2000> ge_bitset;
        int j = N - 1;
        while (j >= 0) {
            int start = j;
            while (j >= 0 && current_metric[j].score == current_metric[start].score) {
                ge_bitset.set(current_metric[j].id);
                j--;
            }
            for (int m = start; m > j; m--) {
                possible_dominators[current_metric[m].id] &= ge_bitset;
            }
        }
    }

    int result = 0;
    for (int i = 0; i < N; i++) {
        if (possible_dominators[i].count() == 1) {
            result++;
        }
    }

    cout << result << endl;

    return 0;
}