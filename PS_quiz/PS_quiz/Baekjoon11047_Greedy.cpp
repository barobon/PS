#include<iostream>
#include<vector>

using namespace std;

int main() {
	int N, K;
	int count = 0;
	cin >> N >> K;

	vector<int> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}	
	for (auto iter = A.rbegin(); iter < A.rend(); iter++) {
		int value = *iter;
		int num=0;
		num = K / value;
		K -= value * num;
		count += num;
	}
	cout << count;

	return 0;
}