#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	char str[5][15] = {'\0'}; //char 형 이차원 배열 초기화 방법

	string input;
	for (int i = 0; i < 5; i++) {
		cin >> input;
		for (int j = 0; input[j] != '\0'; j++)
			str[i][j] = input[j];
	}

	for (int i = 0; i <15; i++)
		for (int j = 0; j <5; j++)
			if (str[j][i] != '\0')
				cout << str[j][i];
			
}
