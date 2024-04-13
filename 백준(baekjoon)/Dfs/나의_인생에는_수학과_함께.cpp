#include <iostream>
#include <string>

using namespace std;
string s;
int N;

int min_distance;

int min_answer;
int max_answer;

char table[5][5];


int dx[2] = {0,1};
int dy[2] = {1,0};


void dfs(int x, int y, bool oper_rator_saver, char oper_rator, int cur_distance, int pre_answer) {

	if (x == N - 1 && y == N - 1) {
		if (min_distance == 0) {
			min_distance = cur_distance;
			min_answer = pre_answer;
			max_answer = pre_answer;
			return;
		}
		else {
			if (min_distance >= cur_distance) {
				if (min_answer > pre_answer) min_answer = pre_answer;
				else if (max_answer < pre_answer) max_answer = pre_answer;
				return;
			}
		}
	}

	if (min_distance != 0) {
		if (cur_distance>min_distance) {
			return;
		}
	}


	for (int i = 0; i < 2; i++) {
		if (x+dx[i] >= 0 && y+ dy[i] >= 0 && x+dx[i] < N && y+dy[i] < N) {
			if (oper_rator_saver == false) {
				oper_rator_saver = true;
				dfs(x + dx[i], y + dy[i], oper_rator_saver,table[x + dx[i]][y + dy[i]], cur_distance+1, pre_answer);
				oper_rator_saver = false;
			}
			else if (oper_rator_saver == true) {

				if (oper_rator == '+') { 
					dfs(x + dx[i], y + dy[i], false,oper_rator, cur_distance + 1, pre_answer+(table[x + dx[i]][y + dy[i]] - '0'));
				}
				else if(oper_rator == '-') {
					dfs(x + dx[i], y + dy[i], false,oper_rator, cur_distance + 1, pre_answer-(table[x + dx[i]][y + dy[i]] - '0'));
				}
				else if (oper_rator == '*') {
			
					dfs(x + dx[i], y + dy[i], false,oper_rator, cur_distance + 1, pre_answer *(table[x + dx[i]][y + dy[i]] - '0'));
				
				}

			}
		}
	}

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	cin.ignore();//개행 제거

	for (int i = 0; i < N; i++) {
		getline(cin,s);
		int k = 0;
		for (int j = 0; j < N; j++) {
			table [i][j]=s[k];
			k += 2;
		}
	}

	dfs(0, 0, false, 0, 0, table[0][0] - '0');
	cout << max_answer <<" "<< min_answer;
}