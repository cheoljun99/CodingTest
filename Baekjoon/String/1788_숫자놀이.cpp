#include<bits/stdc++.h>

using namespace std;

string strArr[10] = {"zero", "one","two","three","four","five","six","seven","eight","nine" };

bool cmp(string & a, string& b) {
	string strA = "";
	string strB = "";
	for (int i = 0; i < a.size(); i++) {
		strA += strArr[a[i]-'0'];
		strA += " ";
	}
	for (int i = 0; i < b.size(); i++) {
		strB += strArr[b[i] - '0'];
		strB += " ";
	}
	return strA < strB;

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N>> M;

	vector<string>vec;
	for (int i = N; i <= M; i++) {
		vec.push_back(to_string(i));
	}

	sort(vec.begin(), vec.end(), cmp);

	int cnt = 1;
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i];
		if (cnt%10 == 0) {
			cout << '\n';
			cnt = 1;
		}
		else {
			cout << " ";
			cnt++;
		}
	}

}