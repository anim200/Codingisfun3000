#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> digits(n);
    for(int i = 0; i < n; i++){
        cin >> digits[i];
    }
    
    // Process digits (e.g., add 1 to the number)
    int carry = 1;
    for(int i = n - 1; i >= 0 && carry; i--){
        int sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum / 10;
    }
    
    if(carry){
        digits.insert(digits.begin(), carry);
    }
    
    // Output result
    for(int digit : digits){
        cout << digit;
    }
    cout << "\n";
    
    return 0;
}