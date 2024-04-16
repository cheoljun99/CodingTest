#include <iostream>
#include <string>
#include <vector>
#include <queue>

#define MAX 100

using namespace std;

char map[MAX][MAX] = {"",};
bool W_map[MAX][MAX] = {false};
bool B_map[MAX][MAX] = { false }; 
int N = 0;//가로
int M = 0;//세로
string s;
int dxy[][2] = { {-1,0},{1,0},{0,-1},{0,1} }; // 위, 아래, 왼쪽, 오른쪽

int W_strong_sum = 0;
int B_strong_sum = 0;

struct pos {
	int x; 
	int y;
};

void W_bfs(int cur_x, int cur_y) {

	int strong = 1;

	W_map[cur_x][cur_y] = true;
	queue<pos>q;
	q.push({ cur_x ,cur_y });

	while (!q.empty()) {

		int x = q.front().x;
		int y = q.front().y;

		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dxy[i][0];
			int ny = y + dxy[i][1];

			if (nx<0 || ny<0 ||nx>M-1||ny>N-1)
			{
				continue;

			}
			if (map[nx][ny] == 'W' && W_map[nx][ny] == false) {
				W_map[nx][ny] = true;
				strong++;
				q.push({ nx,ny });
			}
		}
	}
	W_strong_sum += (strong * strong);

}

void B_bfs(int cur_x, int cur_y) {

	int strong = 1;

	B_map[cur_x][cur_y] = true;
	queue<pos>q;
	q.push({ cur_x ,cur_y });

	while (!q.empty()) {

		int x = q.front().x;
		int y = q.front().y;

		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dxy[i][0];
			int ny = y + dxy[i][1];

			if (nx<0 || ny<0 || nx>M - 1 || ny>N - 1)
			{
				continue;

			}
			if (map[nx][ny] == 'B' && B_map[nx][ny] == false) {
				B_map[nx][ny] = true;
				strong++;
				q.push({ nx,ny });
			}
		}
	}

	B_strong_sum += (strong * strong);
}

int main() {

	cin >> N;
	cin >> M;
	cin.ignore();

	for (int i = 0; i < M; i++) {
		getline(cin, s);
		for (int j = 0; j < N; j++) {
			map[i][j] = s[j];
		}
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j]=='W' && W_map[i][j] == false) {
				W_bfs(i, j);
			}
		}
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 'B' && B_map[i][j] == false) {
				B_bfs(i, j);
			}
		}
	}

	cout << W_strong_sum <<" "<< B_strong_sum << endl;
	return 0;
}