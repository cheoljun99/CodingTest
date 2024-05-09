#include <bits/stdc++.h>

using namespace std;

struct Egg {
public:
	int hp;
	int weight;
};

int ans=0;
int cnt=0;
int N;
Egg egg[8];

void backtracking(int cur_idx) { // cur_idx번째 계란으로 다른걸 깰 차례
	if (cur_idx == N) { // 집을 계란이 없는 경우
		ans = max(ans, cnt);
		return;
	}
	if (egg[cur_idx].hp <= 0 || cnt == N-1) {
		// 현재 집은 계란이 깨진 계란 or  현재 집은 계란이 가장 우측 계란인 경우
		backtracking(cur_idx + 1);
		return;
	}
	for (int i = 0; i < N; i++) {
		if (i == cur_idx || egg[i].hp <= 0) continue;
		egg[cur_idx].hp -= egg[i].weight;
		egg[i].hp -= egg[cur_idx].weight;
		if (egg[cur_idx].hp <= 0) cnt++;
		if (egg[i].hp <= 0) cnt++;
		backtracking(cur_idx + 1);
		if (egg[cur_idx].hp <= 0) cnt--;
		if (egg[i].hp <= 0) cnt--;
		egg[cur_idx].hp += egg[i].weight;
		egg[i].hp += egg[cur_idx].weight;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int S;
		int W;
		cin >>S>>W;
		egg[i].hp = S;
		egg[i].weight = W;
	}

	backtracking(0);
	cout << ans;
}