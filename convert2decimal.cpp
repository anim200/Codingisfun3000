#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    int len = s.size();
    int num = 0;
    int power = 1;

    for (int i = len - 1; i >= 0; i--) {
        if (s[i] == '1') {
            num += power;
        }
        power = power * 2;
    }

    cout << num;
}

