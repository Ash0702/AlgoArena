#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector <int> v(1001, 1);
    v[0] = v[1] = 0;
    for(int i = 2 ; i < 1001; i++){
        if(v[i]){
            for(int j = 2; i*j < 1001 ; j++){
                v[i*j] = 0;
            }
        }
    }
    vector <int> primes;
    for(int i = 2 ; i < 1001 ; i++){
        if(v[i]){
            primes.push_back(i);
        }
    }
    int n ; cin >> n;
    long x;
    for(int i = 0 ; i < n ; i++){
        cin >> x;
        int count;
        int ans = 1;
        for(int i = 0 ; i < primes.size() ; i++){
            count = 0;
            while(x%primes[i] == 0){
                count++;
                x = x/primes[i];
            }
            
            ans *= (count+1);
        }
        if(x!=1){
            cout << "2\n";
        }
        cout << ans << "\n";
    }
    return 0;
}