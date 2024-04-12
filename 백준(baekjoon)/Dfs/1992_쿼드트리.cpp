#include <iostream>
#include <vector>



using namespace std;
string s;
int N;
int videos[64][64];


void dfs(int x, int y, int size) {
    if (size == 1) {
        cout << videos[x][y];
        return;
    }

    bool only_zero_check = true;
    bool only_one_check = true;

    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (videos[i][j] == 0)only_one_check = false;
            if (videos[i][j] == 1)only_zero_check = false;
        }
    }

    if (only_one_check == true) {
        cout << 1;
        return;
    }
    if (only_zero_check == true) {
        cout << 0;
        return;
    }

    cout << "(";
    dfs(x, y, size / 2);
    dfs(x, y + size / 2, size / 2);
    dfs(x + size / 2, y, size / 2);
    dfs(x + size / 2, y + size / 2, size / 2);
    cout << ")";
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> s;
        for (int j = 0; j < N; j++) {
            videos[i][j] = s[j] - '0';
        }
    }

    dfs(0, 0, N);


}