#include<iostream>
#include<string>
using namespace std;

int main() {
	string str[2] = {"avcc", "sdfa"};
	int num = sizeof(str)/sizeof(str[0]);
	int num2 = str->length();
	cout << num << endl << num2;
	return 0;
}