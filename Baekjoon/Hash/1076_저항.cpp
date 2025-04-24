#include<bits/stdc++.h>

using namespace std;

map<string, pair<int, long long> > m = { {"black",{0, 1}},{"brown",{1, 10}}, { "red",{2,100} }, { "orange",{3, 1000} }, { "yellow",{4, 10000} }, { "green",{5, 100000} }, { "blue",{6, 1000000} }, { "violet",{7, 10000000} }, { "grey",{8, 100000000} }, { "white",{9, 1000000000} } };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string first;
	string second;
	string third;
	cin >> first >> second >> third;

	cout << (m[first].first * 10 + m[second].first) * m[third].second;



}