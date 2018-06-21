#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

// long long poww(long long a, long long b) {
// 	int r = 1, base = a;
// 	while (b != 0) {
// 		if (b % 2) 
// 			r *= base;
// 		base *= base;
// 		b /= 2;
// 	}
// 	return r;
// }


// long long a, b;
// int main() {
// 	cin >> a >> b;
// 	long long ansa, ansb;
// 	ansa = poww(a, b);
// 	ansb = poww(b, a);
// 	if (ansa > ansb) cout << ">" << endl;
// 	else if (ansa < ansb) cout << "<" << endl;
// 	else cout << "=" << endl;
// 	return 0;
// }

double a, b;
long long x, y;

int main() {
	cin >> x >> y;
	a = y * log(x);
	b = x * log(y);
	if (abs(a-b) < 0.01) cout << "=" << endl;
	else if (a < b) cout << "<" << endl;
	else cout << ">" << endl;

}