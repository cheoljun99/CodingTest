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
        int count = 0; // 3��° ���ڸ� �����ϴ� ī����
        int size = deq.size();

        // �� 3��° ���� ���� (������)
        for (int i = 0; i < size; i++) {
            char current = deq.front();
            deq.pop_front();
            count++;
            if (count % 3 != 0) {
                deq.push_back(current);
            }
        }

        count = 0; // ī���� �ʱ�ȭ
        size = deq.size();

        // �� 3��° ���� ���� (������)
        for (int i = 0; i < size; i++) {
            char current = deq.back();
            deq.pop_back();
            count++;
            if (count % 3 != 0) {
                deq.push_front(current);
            }
        }
    }

    // ���� �� ���� ��� (���ĺ� �� ����)
    if (deq.front() > deq.back()) {
        swap(deq.front(), deq.back());
    }
    cout << deq.front() << deq.back() << endl;

    return 0;
}