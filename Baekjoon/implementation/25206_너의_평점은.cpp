#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	char name[51];
	char grade[3];
	double credit;
	
	double sum_credit = 0;
	double temp = 0;
	double result = 0;
	for (int i = 0; i < 20; i++) {
		scanf("%s %lf %s",name,&credit,grade);
		if (grade[0] == 'P')
			continue;
		sum_credit += credit;
		if (grade[0] == 'F')
			continue;
		if (grade[0] == 'A')
			temp = 4;
		else if (grade[0] == 'B')
			temp = 3;
		else if (grade[0] == 'C')
			temp = 2;
		else
			temp = 1;
		if (grade[1] == '+')
			temp += 0.5;
		result += credit * temp;

	}
	printf("%lf", result / sum_credit);
}
