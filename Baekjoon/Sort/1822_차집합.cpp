#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	cin >> N >> M;
	
	vector<int>A;
	vector<int>B;

	for (int i = 0; i < N; i++) {
		
		int num;
		cin >> num;
		A.push_back(num);
	}

	for (int i = 0; i < M; i++) {
		int num;
		cin >> num;
		B.push_back(num);
	}
	
	sort(A.begin(), A.end(), less<int>());
	sort(B.begin(),B.end(), less<int>());
	int ACnt = 0;
	int BCnt = 0;
	vector<int>result;
	while (ACnt <N&&BCnt<M){
		if (A[ACnt] > B[BCnt]) {
			BCnt++;
		}
		else if (A[ACnt] < B[BCnt]) {
			result.push_back(A[ACnt]);
			ACnt++;
		}
		else {
			ACnt++;
		}
	}
	if (ACnt== N) {
		if (result.size() == 0) {
			cout << 0;
			return 0;
		}
		cout << result.size() << '\n';
		for (auto i : result)
			cout << i << " ";
		return 0;
	}
	else {
		while (ACnt < N) {
			result.push_back(A[ACnt]);
			ACnt++;
		}
		cout << result.size() << '\n';
		for (auto i : result)
			cout << i << " ";
		return 0;
	}

}