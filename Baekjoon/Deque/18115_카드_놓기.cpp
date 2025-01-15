#include<bits/stdc++.h>

using namespace std;

/*�� ��° �ٿ��� ���̰� N�� ���� A�� �־�����.Ai�� x�̸�, 
i��°�� ī�带 �������� �� x�� ����� ��ٴ� ���̴�.
Ai�� 1, 2, 3 �� �ϳ��̸�, An�� �׻� 1�̴�.*/

// �� �׻� ������ ���� 1 ~ N �̹Ƿ� N��°�� �δ� ī��� 1�̴�. ����� ��
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int>vec(N+1);
	for (int i = 0; i < N; i++) {
		cin >> vec[i+1];
	}

	deque<int>deq;

	int cnt = 1;
	for (int i = N; i >=1; i--) {
	
		if (vec[i] == 1) {
			deq.push_back(cnt);
		}

		else if (vec[i] == 2) {
			int temp = deq.back();
			deq.pop_back();
			deq.push_back(cnt);
			deq.push_back(temp);
			
		}
		else if (vec[i] == 3) {
			deq.push_front(cnt);
		}
		cnt++;
	}

	while (!deq.empty()) {
		cout << deq.back() << " ";
		deq.pop_back();
	}

}