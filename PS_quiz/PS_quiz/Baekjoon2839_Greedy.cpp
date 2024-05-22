#include<iostream>

using namespace std;

int main() {
	int N;
	int count3 = 0, count5 = 0;
	int result = 0;
	cin >> N;

	count5 = N / 5;
	for (int i = count5; i >= 0; i--) {
		int tmp = N - 5 * i;
		if (tmp %3 == 0) {
			count3 = tmp / 3;
			result = count3 + i;
			break;
		}
		if (tmp % 3 != 0 && i==0) {
			count3 = tmp / 3;
			result = -1;
			break;
		}
	}
	
	cout << result;
	return 0;
}