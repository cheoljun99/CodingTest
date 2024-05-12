#include <bits/stdc++.h>

using namespace std;

bool compare(string s1, string s2) {
	if (s1.length() == s2.length()) {
		return s1 < s2;
	}
	else
	{
		return s1.length() < s2.length();
	}
}

int main() {

	int N;
	cin >> N;

	vector<string> vec;
	while (N--) {
		string str;
		cin >> str;
		vec.push_back(str);
	}

	sort(vec.begin(), vec.end(), compare);
	vec.erase(unique(vec.begin(), vec.end()), vec.end());

	for (auto i : vec) {
		cout << i << '\n';
	}
}

