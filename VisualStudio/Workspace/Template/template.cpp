#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    // 각 알파벳의 첫 등장과 마지막 등장 위치 저장
    map<char, pair<int, int>> pos;

    for (int i = 0; i < str.size(); i++) {
        if (pos.find(str[i]) == pos.end()) {
            pos[str[i]].first = i;  // 첫 등장 위치
        }
        else {
            pos[str[i]].second = i; // 마지막 등장 위치
        }
    }

    int result = 0;

    // 모든 가능한 두 소의 쌍 (A ~ Z)
    for (char c1 = 'A'; c1 <= 'Z'; c1++) {
        for (char c2 = c1 + 1; c2 <= 'Z'; c2++) {
            if (pos.find(c1) == pos.end() || pos.find(c2) == pos.end()) continue;

            int a1 = pos[c1].first, a2 = pos[c1].second;
            int b1 = pos[c2].first, b2 = pos[c2].second;

            // 교차하는 경우: (A1 < B1 < A2) && (B2 < A2)
            if ((a1 < b1 && b1 < a2) && (b2 > a2)) {
                result++;
            }
            if ((b1 < a1 && a1 < b2) && (a2 > b2)) {
                result++;
            }
        }
    }

    cout << result << "\n";
    return 0;
}
