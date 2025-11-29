#include <bits/stdc++.h>
using namespace std;

int reverseBinaryToDecimal(int n) {
    string reversed = "";

    if (n == 0) return 0;

    // Step 1: build reversed binary (LSB first)
    while (n > 0) {
        reversed += (n % 2 == 0 ? '0' : '1');
        n /= 2;
    }

    // Step 2: convert reversed binary -> decimal
    int decimalValue = 0;
    int power = 1; // 2^0

    // iterate from right to left
    for (int i = reversed.size() - 1; i >= 0; --i) {
        if (reversed[i] == '1') {
            decimalValue += power;
        }
        power *= 2;
    }

    return decimalValue;
}

int main() {
    int n;
    cin >> n;
    cout << reverseBinaryToDecimal(n) << endl;
    return 0;
}
