#include<iostream>
#include<vector>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<vector<int>> matrixA(N, vector<int>(M));
	vector<vector<int>> matrixB(N, vector<int>(M));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> matrixA[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> matrixB[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		int out_Num;
		for (int j = 0; j < M; j++) {
			out_Num = matrixA[i][j] + matrixB[i][j];
			cout << out_Num << " ";
		}
		cout << endl;
	}
	return 0;
}