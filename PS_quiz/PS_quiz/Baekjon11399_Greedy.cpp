#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>

using namespace std;

int main() {
	int N;
	int result = 0;
	cin >> N;

	vector<int> P(N);

	for (int i = 0; i < N; i++) {
		cin >> P[i];
	}
	sort(P.begin(), P.end());

	for (auto iter = P.begin(); iter != P.end(); iter++) {
		result += accumulate(P.begin(), iter+1, 0);
	}
	cout << result;
	return 0;
}