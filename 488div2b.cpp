#include <cstdio>
#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>
#include <set>

using namespace std;

struct knight {
	long long rank, coin, index;
};
int n, k;
long long ans[200000];



bool comparison(knight a, knight b) {
	return a.rank < b.rank;
}

int main() {

	cin >> n >> k;
	vector<knight> kn(n);

	for (int i = 0; i < n; i++) {
		cin >> kn[i].rank;
	}
	for (int i = 0; i < n; i++) {
		cin >> kn[i].coin;
	}
	for (int i = 0; i < n; i++) {
		kn[i].index = i;
	}

	sort(kn.begin(), kn.end(), comparison);
/* test sort
	for (int i = 0; i < n; i++) {
		cout << kn[i].rank << " " << kn[i].coin;
	}
*/


	multiset<int> s;
	for (int i = 0; i < n; i++) {
		ans[kn[i].index] = kn[i].coin;
		for (auto t:s) {
			ans[kn[i].index] += t;
		}
		s.insert(kn[i].coin);
		while (s.size() > k) {
			s.erase(s.begin());
		}
	}

	for (int i = 0; i < n; i++) {
		cout << ans[i] << " ";
	}


	return 0;
}

