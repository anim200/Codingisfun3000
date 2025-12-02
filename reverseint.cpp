#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=0;
    int sign = 1;
   if (n < 0) {
    sign = -1;
    n = -n;   // convert to positive
   }
    
    
    while (n>0)
    {   
        int rem=n%10;
        num=num*10+rem;
        if(num<0) //overflow condition
        {
            cout<<0;
            return 0;
        }
        n=n/10;
    }  
    cout<<num*sign;
    
    

    
}