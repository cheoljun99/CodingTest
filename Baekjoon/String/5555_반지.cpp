#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string target;
	cin >> target;

	int N;
	cin >> N;

	int result = 0;
	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;
		input += input;
		if(string::npos!=input.find(target))
			result++;

	}

	cout << result;
}