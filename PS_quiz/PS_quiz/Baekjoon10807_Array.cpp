#include<iostream>
#include<vector>

using namespace std;

int main() {
	int N, V;
	int count = 0;
	cin >> N;
	vector<int> nums(N);

	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}
	cin >> V;

	for (int num : nums) {
		if (num == V)
			count++;
	}
	cout << count;

	return 0;
}