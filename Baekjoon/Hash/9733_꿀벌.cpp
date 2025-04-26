#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<string>vec;
	map<string, int>m;

	string str;
	while (getline(cin, str)) {
		if (str == "-1")
			break;
		stringstream ss(str);
		while (ss >> str) {
			vec.push_back(str);
		}
	}

	for (int i = 0; i < vec.size(); i++) {
		if (m.find(vec[i]) == m.end()) {
			m.insert({ vec[i],1 });
		}
		else {
			m[vec[i]]++;
		}
	}
	vector<string> work = { "Re","Pt","Cc","Ea","Tb","Cm","Ex" };
	for (int i = 0; i < work.size(); i++) {
		string work_str = work[i];
		if (m.find(work_str) != m.end()) {
			cout << work_str << ' ' << m[work_str] << ' ';
			cout << fixed << setprecision(2) <<(double)m[work_str] / vec.size()<< '\n';
		}
		else {
			cout << work_str << ' ' << 0 << ' ';
			cout << "0.00"<<'\n';
		}
	}
	cout << "Total " << vec.size() << " 1.00";

}