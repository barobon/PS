#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main() {
	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		char alphabet = input[i];
		if (islower(alphabet)) {
			input[i] = toupper(alphabet);
			continue;
		}
		if (isupper(alphabet))
			input[i] = tolower(alphabet);
	}
	cout << input;
	return 0;
}