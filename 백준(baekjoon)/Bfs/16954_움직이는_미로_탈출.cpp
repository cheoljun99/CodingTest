#include <iostream>
#include <string>
#include <queue>

using namespace std;

string s;
char table[8][8];

const int dxy[][2] = { {-1,0},{1,0},{0,-1},{0,1},{-1,-1},{-1,1},{1,-1},{1,1},{0,0} };

struct pos {
	int time;// 이동지점에서의 현재시간
	int x, y;

};

int bfs() {
	queue<pos> q;
	q.push({ 0,7,0 });

	while (!q.empty()) {
		int t = q.front().time;
		int x = q.front().x;
		int y = q.front().y;

		q.pop();


		if (x == 0)return 1; //맨 위의 위치에 도달한 경우 그 위에 벽이 없기 때문에 벽을 만날일이 없으므로 어떻게든 (0,7)에 도달할 수 있다.

		for (int i = 0; i < 9; i++) {
			int nx = x + dxy[i][0];
			int ny = y + dxy[i][1];
			int nt = t + 1;

			if (nt >= 8)return 1; // 8초의 시간이 흐른 경우 벽이 어디에 있든지 간에 이미 사라져있으므로 (0,7)에 도달할 수 있다.

			if (nx < 0 || nx >= 8 || ny < 0 || ny >= 8)//영역을 벗어난 경우
				continue;
			if (nx - t >= 0 && table[nx - t][ny] == '#') //벽을 만난 경우
				continue;
			if (nx - t - 1 >= 0 && table[nx - t - 1][ny] == '#') // 이동한 뒤에 벽이 내려올 경우
				continue;
			//시간은 항상 증가하며 전에 이동한 곳으로 또한 번 이동이 가능하고 또 이동을 안하는 경우도 있으므로 방문 표시를 할 필요가 없다. 
			q.push({ nt,nx,ny });
		}

	}
	return 0;
}


int main() {


	for (int i = 0; i < 8; i++) {
		getline(cin, s);
		for (int j = 0; j < 8; j++) {
			table[i][j] = s[j];
		}
	}


	
	cout << bfs() << endl;;




}