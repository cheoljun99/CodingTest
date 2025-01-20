#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	queue<int>q;
	int cnt = 0;
	int top = 0;

	queue<int> ans;

	while (N--) {
		int A;
		cin >> A;

		if (A == 1) {
			int a;
			cin >> a;
			q.push(a);
			cnt++;
		}
		else {
			q.pop();
			cnt--;
		}

		
		if(cnt == top){
			if (top == 0) {
				ans = q;
				top = cnt;
			}
			else if (ans.back() > q.back()) {
				ans = q;
			}
		}
		else if (cnt > top) {
			ans = q;
			top = cnt;
		}
		
	}

	
	cout << top << " "<< ans.back() << " ";
	
}