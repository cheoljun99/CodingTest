#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string input;
	cin >> input;

	string result = "";

	for (int i = 0; i < input.size() - 1; i++) {
		for (int j = i + 1; j < input.size() - 1; j++) {

			string temp="";
			string A, B, C = "";

			for (int k = 0; k <= i; k++) A += input[k];
			for (int k = i+1; k <= j; k++) B += input[k];
			for (int k = j+1; k < input.size(); k++) C += input[k];

			reverse(A.begin(),A.end());
			reverse(B.begin(), B.end());
			reverse(C.begin(), C.end());

			temp = A + B + C;

			if (result == "")
				result = temp;
			else {
				if (result > temp)
					result = temp;
			}

		}
	}
	cout << result;



}
