#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

string str[10];
bool flag[10];
int main() {

	int n, ans;
	cin >> n;
	ans = 6 - n;

	for (int i = 0; i < n; i++) {
		cin >> str[i];
		if (str[i] == "purple") {
			flag[1] = true;
		}
		if (str[i] == "green") {
			flag[2] = true;
		}
		if (str[i] == "blue") {
			flag[3] = true;
		}
		if (str[i] == "orange") {
			flag[4] = true;
		}
		if (str[i] == "red") {
			flag[5] = true;
		}
		if (str[i] == "yellow") {
			flag[6] = true;
		}
	}

	cout << ans << endl;
	
		if (!flag[1]) {
			cout << "Power" << endl;
		}
		if (!flag[2]) {
			cout << "Time" << endl;
		}
		if (!flag[3]) {
			cout << "Space" << endl;
		}
		if (!flag[4]) {
			cout << "Soul" << endl;
		}
		if (!flag[5]) {
			cout << "Reality" << endl;
		}
		if (!flag[6]) {
			cout << "Mind" << endl;
		}
	
	return 0;
}
