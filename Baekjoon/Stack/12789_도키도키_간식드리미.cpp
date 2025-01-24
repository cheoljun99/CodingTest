#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int N;
	cin >> N;
	stack<int>st;

	int check = 1;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;

		st.push(num);

		if (!st.empty()) {

			while (1) {
				if (!st.empty()&&check == st.top()) {
					st.pop();
					check++;
				}
				else {
					break;
				}
			}
		}
	}
	while (!st.empty()) {
		if (st.top() == check) {
			st.pop();
			check++;
		}
		else {
			cout << "Sad";
			return 0;
		}
	}
	cout << "Nice";
}