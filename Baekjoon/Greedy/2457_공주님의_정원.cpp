#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	int S1, S2, E1, E2;
	int start = 300;// ó�� start�� ���� ������ 3�� 1�� ���� �۾ƾ��Ѵ�.
	int end = 301; // ó�� end�� ���� ������ 3�� 1�ϰ� ���� �Ͽ� 3�� 1�� ���� Ȥ�� 3�� 1�� ���� ���� �Ǵ� ���� ������ �� �ֵ��� �Ѵ�.
	int maxEnd = 0;

	int result = 0;

	vector<pair<int, int>>vec;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> S1 >> S2 >> E1 >> E2;

		if (S1 * 100 + S2 < 301) {
			// 3�� 1�� ������ �Ǵ� ��� ����� ���Ǹ� ���� 3�� 1�Ϸ� �����Ѵ�.
			S1 = 3;
			S2 = 1;
		}

		if (E1 * 100 + E2 > 1130) {
			//11�� 30�� ���Ŀ� ���� ���� ����� ���Ǹ� ���� 12�� 1�Ϸ� �Ѵ�. 12�� 1�Ϸ� �ϴ� ������ 11�� 30�ϳ� ���� ��� ���� ���ǿ� ���� �ش� ���� ���� �����ʴ� ���̴�.
			E1 = 12;
			E2 = 1;
		}
		vec.push_back({ S1 * 100 + S2,E1 * 100 + E2 });
	}
	sort(vec.begin(),vec.end()); // ù��° ��� �� �����Ϸ� ����

	for(int i=0;i<N;i++){

		if (vec[i].first > start && vec[i].first <= end) { 
			// ���ĵ� ������ ù��° ��Ұ� start���� ũ�� end���� �۰ų� ���� ��� �� ������ ������ ���
			if (maxEnd < vec[i].second) {
				// �׸��� �����Ͽ� ������ �ι�° ��� �� ���� ���� ���� ���� ���� ��츦 ã�� ������ maxEnd�� ���� ū ��� maxEnd���� �ش簪���� �����Ѵ�. 
				maxEnd = vec[i].second;
			}
			if (vec[i].second == 1201) {
				// ���ǿ��� ������ 11��30�Ϻ��� ���Ŀ� ���� ���� ������ ��� ������ ���� �ε����� �� �ʿ䰡 �����Ƿ� ����
				result++;
				end = maxEnd;
				break;
			}
		}

		else {

			if (end >= maxEnd) {
				//�̺κ��� ���ذ� �߾Ȱ���
				break;
			}

			result++;
			start = end;
			end = maxEnd;
			i--;
		}
	
	}
	if (end == 1201) {
		cout << result << endl;
	}
	else {
		cout << 0 << endl;
	}
}