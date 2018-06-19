#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int n, k, ans;
int num[1000000];
int copy[1000000];

int main() {

	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}


	// from the smallest to the greatest
	sort(num, num + n);
	num[n++] = 99999998;

/*
	for (int i = 0; i < n; i++) {
		cout << num[i] << " ";
	}
	cout << "\n";
*/
	int j = 0;
	for (int i = 0; i < n-1; i++) {
				while (num[j] == num[i] && j < n) {
			j++;
		}
		if (num[j] - num[i] > k) {
			ans++;
		}
	}
	
	
	cout << ans << endl;

	
	
	return 0;
}
