#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int n, ppl;
int num[10000];
int curr_ppl;
int flag[10000];
int ans[10000];

int main() {
	cin >> n >> ppl;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	
	int temp = 0;
	for (int i = 0; i < n; i++) {
		if (!flag[num[i]]) {
			flag[num[i]] = true;
			ans[temp++] = i;
		}
	}

	if (temp >= ppl) {
		cout << "YES" << endl;
		int i = 0;
		while (i < ppl) {
			cout << ans[i]+1 << " ";
			i++;
		}
	} else {
		cout << "NO";
	}

	return 0;
}

