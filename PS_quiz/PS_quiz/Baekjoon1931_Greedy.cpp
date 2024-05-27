#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(vector<int> a, vector<int> b) {
	if (a.back() == b.back()) return a.front() < b.front();
	return a.back() < b.back();
}
int main() {
	int N;
	int end_time = 0;
	int count = 0;
	cin >> N;
	vector<vector<int>> time_Table(N,vector<int>(2)	);

	for (int i = 0; i < N; i++) {
		cin >> time_Table[i][0] >> time_Table[i][1];
	}

	sort(time_Table.begin(), time_Table.end(), cmp);

	for (const auto& vec : time_Table) {
		int start_time = vec[0];
		if (start_time >= end_time) {
			count++;
			end_time = vec[1];
		}
	}
	cout << count;
	return 0;
}