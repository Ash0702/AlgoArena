#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define MOD 1000000007;
int binaryexponentiation(long long x, long long k){
    long long ans = 1;
    long long ruff = x;
    if(k%2 == 1){
        ans = x;

    }
    k /= 2;
    for( ;k!=0 ; k/=2){
        ruff = (ruff * ruff)%1000000007;
        if(k%2 == 1){
            ans = (ans * ruff)%1000000007;
        }
        
    }
    return ans;
}

int main(){
    int n; cin >> n;
    long long ruff;
    long long x ;long long k;
    long long number, sum,product;
    number = sum = product =1;
    vector <pair<long long,long long>> v;
    for(int i =0 ; i < n ; i++){
        cin >> x >> k;
        v.push_back(make_pair(x,k));
    }
    for(int i = 0 ; i < n ; i++){
        number *= ((v[i].second) +1)%MOD;
        sum *= (binaryexponentiation(v[i].first, (v[i].second) +1) -1) / ((v[i].first) -1);
        sum %= MOD;
        ruff = binaryexponentiation(v[i].first, (v[i].second));
        product *= binaryexponentiation(ruff, )
    }
    cout << number << "\n" << sum << "\n" << product;
    
    

    return 0;
}