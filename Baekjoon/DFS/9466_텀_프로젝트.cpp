/*function call 횟수 줄이자 vector 선언은 최소한만 연속된 for문간 vector 선언 횟수 최대한 적게 이중 vector 사용 최대한 자제*/


#include <iostream>
#include <cstring>

#define MAX 100001


using namespace std;


int student_table[MAX];
bool team_table[MAX];
bool check_table[MAX];
int team_number = 0;


void dfs(int cur_student) {
	check_table[cur_student] = true;// 방문한곳 표시
	int next_student = student_table[cur_student]; // 다음 방문대상

	if (!check_table[next_student]) {
		//다음 방문대상이 방문한곳이 아닐경우.

		dfs(next_student);// 깊이탐색
	}
	else if (!team_table[next_student]) {
		//깊게 탐색하다가 다음 방문대상이 방문한 곳이면(사이클 형성) 그때 그 곳이 사이클 형성했다는 걸 과거에 체크를 안한 경우이면
		//팀원 추가해야함  
		// 
		//
		//방문은 했지만 아직 사이클이 아니라면 next까지 포함해서 사이클 완성
		//자기 자신을 포함한 팀의 멤버를 카운트

		for (int i = next_student; i != cur_student; i = student_table[i]) {
			//팀원 추가
			team_number++;
		}
		team_number++;// 자기 자신 추가
	}
	team_table[cur_student] = true;//팀원 결성

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input_number = 0;
	cin >> input_number;

	while (input_number--) {
		team_number = 0;
		int student_number = 0;
		cin >> student_number;

		for (int j = 0; j < student_number; j++) {
			int select_number = 0;
			cin >> select_number;
			student_table[j] = select_number - 1;
			team_table[j] = false;
			check_table[j] = false;
		}
		for (int i = 0; i < student_number; i++) {
			if (!check_table[i]) {
				dfs(i);
			}
		}
		cout << student_number - team_number << endl;
	}
}

/*
*
*시간 초과 코드
*
* 이유:
*
* dfs 호출이 상대적으로 더 많은데
* 팀을 결성하지 못한 대상만 탐색을 하긴 하지만 탐색하는 깊이에서 종료 조건이 해당 코드는 완전 탐색 후 사이클을 형성하는지 확인하다. 때문에 완전탐색부분이 있기 때문에 시간이 오래걸림.
*
*
#include <iostream>
#include <cstring>

#define MAX 100001


using namespace std;
int student_table[MAX];
bool count_table[MAX];
bool check_table[MAX];
int team_number = 0;

int dfs(int cur_student, int first_student) {

	int next = student_table[cur_student];

	if (next == first_student) {
		count_table[cur_student] = 1;
		team_number++;
		return 1;
	}

	if (check_table[next] == 1) {
		return 0;
	}

	if (count_table[next] == 1) {
		return 0;

	}
	else
	{
		check_table[cur_student] = true;
		int check = dfs(next, first_student);
		check_table[cur_student] = false;
		if (check == 1) {
			count_table[cur_student] = 1;
			team_number++;
			return 1;
		}
	}

	return 0;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input_number = 0;
	cin >> input_number;

	for (int i = 0; i < input_number; i++) {
		team_number = 0;
		int student_number = 0;
		cin >> student_number;

		for (int j = 0; j < student_number; j++) {
			int select_number = 0;
			cin >> select_number;
			student_table[j] = select_number - 1;
			count_table[j] = false;
			check_table[j] = false;
		}
		for (int i = 0; i < student_number; i++) {
			if (count_table[i] == 0) {
				dfs(i, i);
			}
		}

		cout << student_number - team_number << endl;

	}
}
*/