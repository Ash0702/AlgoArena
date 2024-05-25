#include <bits/stdc++.h>
using namespace std;
long MOD = 1000000007;

long funct(long a, long b ,long mod ){
    long long product = 1;
    long ruff = a;
    if(!b){
        return 1;
    }
    for( ; b!=0 ; b /= 2){
        if(b%2 == 1){
            product = (product*ruff)%mod;
        }
        ruff = (ruff*ruff)%mod;
    }
    return product;
}

int main(){
    int n ; cin >> n;
    long a,b,c,ruff ;
    for(int i = 0 ; i < n ; i++){
        cin >> a >> b >> c;
        ruff = funct(b,c, MOD -1);
        ruff = funct(a, ruff, MOD);
        cout << ruff << "\n";
    }
}