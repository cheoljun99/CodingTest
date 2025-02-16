#include<bits/stdc++.h>

using namespace std;

int orderCount = 1;
map<int, int> inputOrder;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
	
	if (a.second == b.second) {
		return inputOrder[a.first] < inputOrder[b.first];
	}

	return a.second > b.second;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	map<int, int> frequency;

	int N, C;
	cin >> N >> C;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		
		auto iterFrequency = frequency.find(num);
		if (iterFrequency == frequency.end()) {
			frequency.insert({ num,1 });
		}
		else {
			frequency[num]++;
		}
		auto iterInputOrder = inputOrder.find(num);
		if (iterInputOrder == inputOrder.end()) {
			inputOrder.insert({ num,orderCount });
			orderCount++;
		}
	}

	vector<pair<int, int>>vec(frequency.begin(), frequency.end());

	sort(vec.begin(), vec.end(), cmp);

	for (auto i : vec) {
		for (int j = 0; j < i.second; j++) {
			cout << i.first << ' ';
		}
	}
}