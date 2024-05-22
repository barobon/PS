#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	int num0 = 0, num1 = 0;
	int min = 0;
	char flag='3';

	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] != flag && str[i] == '0') {
			num0++;
			flag = '0';
		}
		if (str[i] != flag && str[i] == '1') {
			num1++;
			flag = '1';
		}
	}
	if (num0 <= num1)
		min = num0;
	if (num1 < num0)
		min = num1;
	cout << min;
}