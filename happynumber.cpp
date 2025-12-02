#include<bits/stdc++.h>
using namespace std;

int digitSquareSum(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;

    while (digitSquareSum(n) != 1)
    {   
        cout << "loop reached" << endl;
        n = digitSquareSum(n); // FIXED: update n
    }

    cout << "Happy Number";
}
