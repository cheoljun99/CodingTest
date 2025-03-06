#include<bits/stdc++.h>

using namespace std;

vector<string>splitString(string str, char delimeter) {

	vector<string>result;
	string token;
	stringstream ss(str);
	while (getline(ss, token, delimeter)) {
		result.push_back(token);
	}
	return result;
}

//최대공약수 유클리드 호제법
int gcd(int N, int M) {
	if (N % M == 0)
		return M;
	else
		return gcd(M, N % M);

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string input;
	cin >> input;

	vector<string>split = splitString(input, ':');

	int N = stoi(split[0]);
	int M = stoi(split[1]);
	int temp = gcd(N,M);

	cout << N / temp << ":" << M / temp;

}