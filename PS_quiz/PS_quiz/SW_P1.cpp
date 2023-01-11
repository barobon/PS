#include <iostream>
#include <string>
using namespace std;

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1,-1,0,0 };

int travel(int r, int c, string* map, int* souvenir) {
	int R = sizeof(map) / sizeof(map[0]);
	int C = map->size();
	int souv = map[r][c] - 65;
	if (r < 0 || r >= R || c < 0 || c >= C) {
		return 0;
	}
	if (souvenir[souv] == 1)
		return 0;

	souvenir[souv] = 1;
	int souvNum = 1;
	int souvNumList[4]{};
	for (int i = 0; i < 4; i++) {
		souvNumList[i] = travel(r + dx[i], c + dy[i], map, souvenir);
	}
}
int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; t++) {
		int R, C;
		int souvenir[26]{};
		string* map;

		cin >> R >> C;
		map = new string[R];

		for (int i = 0; i < R; i++) {
			cin >> map[i];
		}

	}
	
	return 0;
}