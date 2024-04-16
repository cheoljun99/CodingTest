/*function call Ƚ�� ������ vector ������ �ּ��Ѹ� ���ӵ� for���� vector ���� Ƚ�� �ִ��� ���� ���� vector ��� �ִ��� ����*/


#include <iostream>
#include <cstring>

#define MAX 100001


using namespace std;


int student_table[MAX];
bool team_table[MAX];
bool check_table[MAX];
int team_number = 0;


void dfs(int cur_student) {
	check_table[cur_student] = true;// �湮�Ѱ� ǥ��
	int next_student = student_table[cur_student]; // ���� �湮���

	if (!check_table[next_student]) {
		//���� �湮����� �湮�Ѱ��� �ƴҰ��.

		dfs(next_student);// ����Ž��
	}
	else if (!team_table[next_student]) {
		//��� Ž���ϴٰ� ���� �湮����� �湮�� ���̸�(����Ŭ ����) �׶� �� ���� ����Ŭ �����ߴٴ� �� ���ſ� üũ�� ���� ����̸�
		//���� �߰��ؾ���  
		// 
		//
		//�湮�� ������ ���� ����Ŭ�� �ƴ϶�� next���� �����ؼ� ����Ŭ �ϼ�
		//�ڱ� �ڽ��� ������ ���� ����� ī��Ʈ

		for (int i = next_student; i != cur_student; i = student_table[i]) {
			//���� �߰�
			team_number++;
		}
		team_number++;// �ڱ� �ڽ� �߰�
	}
	team_table[cur_student] = true;//���� �Ἲ
	
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input_number = 0;
	cin >> input_number;

	while(input_number--) {
		team_number = 0;
		int student_number=0;
		cin>> student_number;
		
		for (int j = 0; j < student_number; j++) {
			int select_number=0;
			cin>>select_number;
			student_table[j] = select_number-1;
			team_table[j] = false;
			check_table[j] = false;
		}
		for (int i = 0; i < student_number; i++) {
			if (!check_table[i]) {
				dfs(i);	
			}
		}
		cout << student_number-team_number << endl;
	}
}

/*
* 
*�ð� �ʰ� �ڵ�
* 
* ����:
* 
* dfs ȣ���� ��������� �� ������
* ���� �Ἲ���� ���� ��� Ž���� �ϱ� ������ Ž���ϴ� ���̿��� ���� ������ �ش� �ڵ�� ���� Ž�� �� ����Ŭ�� �����ϴ��� Ȯ���ϴ�. ������ ����Ž���κ��� �ֱ� ������ �ð��� �����ɸ�.
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