#include <cstdio>
#include <iostream>
using namespace std;

int a, b;
int seq[100000];
bool fp[10];

int main() {
	
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> seq[i];
	}

	for (int i = 0; i < b; i++) {
		int temp;
		cin >> temp;
		fp[temp] = true;
	}

	for (int i = 0; i < a; i++) {
		if (fp[seq[i]]) {
			cout << seq[i] << " ";
		}
	}
	return 0;
}

