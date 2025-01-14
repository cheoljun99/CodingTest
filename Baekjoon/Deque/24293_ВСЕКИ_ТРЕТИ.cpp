#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    deque<char> deq;
    for (char c : str) {
        deq.push_back(c);
    }

    while (deq.size() > 2) {
        int count = 0; // 3번째 문자를 추적하는 카운터
        int size = deq.size();

        // 매 3번째 문자 제거 (정방향)
        for (int i = 0; i < size; i++) {
            char current = deq.front();
            deq.pop_front();
            count++;
            if (count % 3 != 0) {
                deq.push_back(current);
            }
        }

        count = 0; // 카운터 초기화
        size = deq.size();

        // 매 3번째 문자 제거 (역방향)
        for (int i = 0; i < size; i++) {
            char current = deq.back();
            deq.pop_back();
            count++;
            if (count % 3 != 0) {
                deq.push_front(current);
            }
        }
    }

    // 남은 두 문자 출력 (알파벳 순 정렬)
    if (deq.front() > deq.back()) {
        swap(deq.front(), deq.back());
    }
    cout << deq.front() << deq.back() << endl;

    return 0;
}