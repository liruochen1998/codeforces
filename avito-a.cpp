#include <cstdio>
#include <iostream>
using namespace std;

bool palin(string str) {
	for (int i = 0; i < str.length() / 2; i++) {
		if (str[i] != str[str.length()-i-1]) {
			return false;
		} 
	}
	return true;
}

string str;

int main() {

	bool flag = true;
	cin >> str;

	for (int i = 0; i < str.length()-1; i++) {
		if (str[i] != str[i+1]) {
			flag = false;
		}
	}

	if (flag) {
		cout << "0" << endl;
		return 0;
	}


	if (!palin(str)) {
		cout << str.length() << endl;
	} else {
		cout << str.length()-1 << endl;
	}

	return 0;
}

