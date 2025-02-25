#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int S, P;
	cin >> S >> P;
	string DNA;
	cin >> DNA;
	unordered_map<char, int>m;

	for (int i = 0; i < 4; i++) {
		if (i == 0) {
			int num;
			cin >> num;
			m.insert({ 'A',num });
		}
		else if (i == 1) {
			int num;
			cin >> num;
			m.insert({ 'C',num });
		}
		else if (i == 2) {
			int num;
			cin >> num;
			m.insert({ 'G',num });
		}
		else if (i == 3) {
			int num;
			cin >> num;
			m.insert({ 'T',num });
		}
	}
	unordered_map<char, int>check;
	check.insert({ 'A', 0 });
	check.insert({ 'C', 0 });
	check.insert({ 'G', 0 });
	check.insert({ 'T', 0 });

	for (int i = 0; i <= P-1; i++) {
		check[DNA[i]]++;
	}
	int result = 0;

	if (check['A'] >= m['A']) {
		if (check['C'] >= m['C']) {
			if (check['G'] >= m['G']) {
				if (check['T'] >= m['T'])
					result++;
			}
		}
	}
	for (int i = P-1; i+1<S; i++) {

		check[DNA[i-(P-1)]]--;
		check[DNA[i+1]]++;

		if (check['A'] >= m['A']){
			if (check['C'] >= m['C']) {
				if (check['G'] >= m['G']) {
					if (check['T'] >= m['T'])
						result++;
				}
			}
		}
	}

	cout << result;

}