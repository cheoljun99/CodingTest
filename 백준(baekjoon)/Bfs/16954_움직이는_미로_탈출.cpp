#include <iostream>
#include <string>
#include <queue>

using namespace std;

string s;
char table[8][8];

const int dxy[][2] = { {-1,0},{1,0},{0,-1},{0,1},{-1,-1},{-1,1},{1,-1},{1,1},{0,0} };

struct pos {
	int time;// �̵����������� ����ð�
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


		if (x == 0)return 1; //�� ���� ��ġ�� ������ ��� �� ���� ���� ���� ������ ���� �������� �����Ƿ� ��Ե� (0,7)�� ������ �� �ִ�.

		for (int i = 0; i < 9; i++) {
			int nx = x + dxy[i][0];
			int ny = y + dxy[i][1];
			int nt = t + 1;

			if (nt >= 8)return 1; // 8���� �ð��� �帥 ��� ���� ��� �ֵ��� ���� �̹� ����������Ƿ� (0,7)�� ������ �� �ִ�.

			if (nx < 0 || nx >= 8 || ny < 0 || ny >= 8)//������ ��� ���
				continue;
			if (nx - t >= 0 && table[nx - t][ny] == '#') //���� ���� ���
				continue;
			if (nx - t - 1 >= 0 && table[nx - t - 1][ny] == '#') // �̵��� �ڿ� ���� ������ ���
				continue;
			//�ð��� �׻� �����ϸ� ���� �̵��� ������ ���� �� �̵��� �����ϰ� �� �̵��� ���ϴ� ��쵵 �����Ƿ� �湮 ǥ�ø� �� �ʿ䰡 ����. 
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