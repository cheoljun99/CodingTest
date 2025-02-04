#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//예를들어 200을 입력하면
	//1+2+3+4+5+6+7+8+9+10+11+12+13+14+15+16+17+18+19+20 = 210
	//1+2+3+4+5+6+7+8+9+10+11+12+13+14+15+16+17+18+19+20-10 = 210-10
	//1+2+3+4+5+6+7+8+9+10+11+12+13+14+15+16+17+18+19+10 = 200
	//이때 젤 끝에 있는 10은 중복이므로 19와 더해서 29로 만듬
	//1+2+3+4+5+6+7+8+9+10+11+12+13+14+15+16+17+18+29 = 200
	//즉 1부터 차례대로 더하다가 S보다 크면 그때 그 지점 -1이 정답이고
	// 같으면 그때 그 지점이 정답이다.

	long long S;
	cin >> S;

	long long temp = 0;
	long long seed = 1;
	while (temp +seed <= S) {
		temp += seed;
		seed++;
	}
	if (temp + seed > S) {
		cout << seed-1;
	}
	else {
		cout << seed;
	}

}