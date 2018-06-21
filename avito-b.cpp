#include <cstdio>
#include <iostream>
#include <map>
#define ll long long
using namespace std;

map<int, int> mp;
ll ans;

int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		ll a, b;
		cin >> a >> b;
		if (mp[a] < b) mp[a] = b;
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		ll a, b;
		cin >> a >> b;
		if (mp[a] < b) mp[a] = b;
	}


	for (auto i:mp) 
		ans += i.second;
	
	cout << ans << endl;
	return 0;

}
