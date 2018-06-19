#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	int n;
	std::vector<string> s(n);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	sort(s.begin(), s.end(), [&] (const string &s, const string &t) {
		return s.size() < t.size();
	});

	for (int i = 0; i < n - 1; ++i) {
		if (s[i + 1].find(s[i]) == string::npos) {
			cout << "NO\n";
			return 0;
		}
	}
	
	cout << "YES\n";
	for (int i = 0; i < n; i++)
		cout << s[i] << endl;
	
	return 0;

}
