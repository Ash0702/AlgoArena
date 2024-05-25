#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;
    long arrivals[n +1], departures[n+1];
    arrivals[n]= departures[n] = 1e9;
    for(int i = 0 ; i < n ; i++){
        cin >> arrivals[i] >> departures[i] ; 
    }
    sort(arrivals, arrivals + n);sort(departures, departures + n);
    long cust[2*n + 1];
    cust[0] = 0;
    int i = 0, j = 0 ;int k = 1  ;
    for( ; k < (2*n + 1) ; k++){
        if(arrivals[i] < departures[j]){
            cust[k] = cust[k-1] + 1;
            i++;continue;
        }
        if(arrivals[i] > departures[j]){
            cust[k] = cust[k-1] - 1;
            j++;continue;
        }
        if(arrivals[i] = departures[j]){
            cust[k+1] =cust[k] =cust[k-1];
            k++;i++;j++;
        }
    }
    int ans = 0;
    for(int i = 0 ; i < (2*n+1) ; i++){
        if(cust[i] > ans){
            ans = cust[i];
        }
    }    
    cout << ans;
    return 0 ;
}