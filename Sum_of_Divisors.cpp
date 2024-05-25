#include <bits/stdc++.h>
using namespace std;
long mod = 1e9 + 7;

int main(){
    long n;cin>>n;
    long sum = 0;
    long ruff =  n/2+1;
    long ruff2;
    for(long i = 1 ; i < n/2+1; i++){
        sum += (n/i) * i;
        sum %= mod;
    }
    if((n- ruff + 1)%2){
        ruff2 = ((n+ruff)/2)%mod;
        sum += (((n-ruff+1)%mod)*ruff2)%mod;
    }
    else{
        ruff2 = ((n-ruff+1)/2)%mod;
        sum += (((n+ruff)%mod)*ruff2)%mod;
    }
    cout << sum;


    return 0;
}