#include <iostream>
#include <vector>
using namespace std;

vector<int> calculate_change(int cents) {
    // 동전의 단위
    vector<int> coins = {25, 10, 5, 1};
    vector<int> counts;

    for (int coin : coins) {
        counts.push_back(cents / coin);
        cents %= coin;
    }

    return counts;
}

int main() {
    int T;
    cin >> T;

    vector<vector<int>> results;
    for (int i = 0; i < T; ++i) {
        int C;
        cin >> C;
        results.push_back(calculate_change(C));
    }

    for (const auto& result : results) {
        for (int count : result) {
            cout << count << " ";
        }
        cout << endl;
    }

    return 0;
}
