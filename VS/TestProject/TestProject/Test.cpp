#include <bits/stdc++.h>
using namespace std;

#define Max 1000001
using namespace std;

int input[Max];
int ans[Max];

int main() {
    

    cout << "테스트 콘솔입니다." << "\n";
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    if (input[0] != 1) {
        cout << -1;
        return 0;
    }
    for (int i = 1; i < n; i++) {
        if (input[i] - input[i - 1] >= 2) {
            cout << -1;
            return 0;
        }
    }
    stack<int> stk;
    for (int i = n - 1; i >= 0; i--) {
        while (!stk.empty() && stk.top() - 1 == input[i]) {
            ans[i]++;
            stk.pop();
        }
        stk.push(input[i]);
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << "\n";
    }
    return 0;
}