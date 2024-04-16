#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {

	int input_num;
	cin >> input_num;

	int input_height = 0;
	vector<int> buildings_height(input_num);
	for (int i = 0; i < input_num; i++) {

		cin >> input_height;
		buildings_height[i] = input_height;
	}

	stack<int> st;
	vector<int> answer(input_num);
	for (int i = 0; i < input_num; i++) {

		while (!st.empty() && buildings_height[st.top()]<=buildings_height[i]) {
			answer[st.top()] = i - st.top() - 1;
			st.pop();
		}
		st.push(i);
	}

	while (!st.empty()) {
		answer[st.top()] = input_num - 1 - st.top();
		st.pop();
	}

	long long output_answer=0;
	for (int i = 0; i < input_num; i++) {
		output_answer += answer[i];
	}
	cout << output_answer;
	return 0;
}