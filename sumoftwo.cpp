#include<bits/stdc++.h>
using namespace std;
int main(){    
    int a,b;
    cin>>a>>b;
    
    while(b!=0)
    {
         int carry = (a & b) << 1;  // Calculate carry
         a = a ^ b;                  // XOR gives sum without carry
         b = carry;                  // Update b to carry for next iteration
    }
    
    cout << a;
}