#include <bits/stdc++.h>

using namespace std;

int board[101][101];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N>> M;

	while (N--) {
		int X1, Y1, X2, Y2;
		cin >> X1 >> Y1 >> X2>> Y2;

		int height = Y2 - Y1;
		int row = X2 - X1;

		for (int Y_point = Y1; Y_point <= Y1 + height; Y_point++) 
			for (int X_point = X1; X_point <= X1 + row; X_point++)
				board[Y_point][X_point]++;
	}

	int ans = 0;
	for (int i = 0; i < 101; i++)
		for (int j = 0; j < 101; j++)
			if (board[i][j] > M)
				ans++;
	cout << ans;
}