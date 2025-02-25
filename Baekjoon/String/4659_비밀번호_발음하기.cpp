#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string input;
	while (getline(cin, input))
	{
		if (input == "end") {
			return 0;
		}
		int moCheck = 0;
		int moThree = 0;
		int jaThree = 0;
		int sameTwo = 0;
		for (int i = 0; i < input.size(); i++)
		{
			if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')
				moCheck++;
			if ((i + 1 < input.size() && i + 2 < input.size())&&(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')) {
				if (input[i + 1] == 'a' || input[i + 1] == 'e' || input[i + 1] == 'i' || input[i + 1] == 'o' || input[i + 1] == 'u')
					if (input[i + 2] == 'a' || input[i + 2] == 'e' || input[i + 2] == 'i' || input[i + 2] == 'o' || input[i + 2] == 'u') {
						moThree++;
						break;
					}
			}
			if ((i + 1 < input.size() && i + 2 < input.size()) && (input[i] != 'a' && input[i] != 'e' && input[i] != 'i' && input[i] != 'o' && input[i] != 'u')) {
				if (input[i + 1] != 'a' && input[i + 1] != 'e' && input[i + 1] != 'i' && input[i + 1] != 'o' && input[i + 1] != 'u')
					if (input[i + 2] != 'a' && input[i + 2] != 'e' && input[i + 2] != 'i' && input[i + 2] != 'o' && input[i + 2] != 'u') {
						jaThree++;
						break;
					}
			}
			if (i + 1 < input.size() && (input[i + 1] == input[i])&&(input[i] != 'e' && input[i] != 'o')) {
				sameTwo++;
				break;
			}
		}
		if (moCheck == 0) {

			cout << '<' << input << "> " << "is not acceptable.\n";
			continue;
		}
		if (moThree > 0) {

			cout << '<' << input << "> " << "is not acceptable.\n";
			continue;
		}
		if (jaThree > 0) {

			cout << '<' << input << "> " << "is not acceptable.\n";
			continue;
		}
		if (sameTwo > 0) {
			cout << '<' << input << "> " << "is not acceptable.\n";
			continue;
		}
		cout << '<' << input << "> " << "is acceptable.\n";


	}


}