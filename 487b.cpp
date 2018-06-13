#include<cstdio>
#include<string>
#include<iostream>
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int n, p;
string str, temp;

bool isperiod() {
	for (int i = p; i < n; i++){
      //  cout << t[i] << t[i-p] << i;
		if (temp[i] != temp[i - p]) return false;}
	return true;
}


int main() {
    fast;
    cin >> n >> p >> str;

    temp = str;

    for (int i = 0; i < n; i++) {
            if (str[i] == '.') {
               temp[i] = '0';
            }
    }

    if (!isperiod()) {
            cout << temp << endl;

            return 0;
    }
    for (int i = 0; i < n; i++) {
            if (str[i] == '.' && i+p < n) {
                    temp[i] = '1';
                    cout << temp << endl;
                    return 0;
            }
    }
    for (int i = n-1; i >= 0; i--) {
            if (str[i] == '.' && i-p >= 0) {
                    temp[i] = '1';
                    cout << temp << endl;
                    return 0;
            }
    }
    cout << "No" << endl;
    return 0;
}
