#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main() {
        int len;
        string input;
        bool flag[10];
        cin >> input;

        len = input.length();
//      cout << len;
        for (int i = 0; i < len; i++) {
                for (int j = i; j < i+3; j++) {
//cout << input[j];
//cout << flag[1] << flag[2] << flag[3];
                if (input[j]== 'A') {
                        flag[1] = true;
                }
                if (input[j] == 'B') {
                        flag[2] = true;
                }
                if (input[j] == 'C') {
                        flag[3] = true;
                }
                }


                if (flag[1] && flag[2] && flag[3]) {
//cout << i;
                        cout << "Yes" << endl;

                        return 0;
                } else {
                flag[1] = false;
                flag[2] = false;
                flag[3] = false;
                }
        }
        cout << "No" << endl;
        return 0;
}
