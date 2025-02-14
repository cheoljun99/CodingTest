#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B;
	cin >> A >> B;
	string tempB = "";

	int cnt = 1;
	
	while (1) {
		if (A == B)
			break;
		if (A > B) {
			cnt = -1;
			break;
		}
		if (B % 2 == 0) {
			B /= 2;
		}
		else if(B%10==1){
			tempB = to_string(B); // to_sting (string -> int or double or float or long)
			tempB.pop_back();
			B = stoi(tempB);
			tempB = "";
		}
		else {
			cnt = -1;
			break;
		}
		cnt++;
	}
	cout << cnt;
}