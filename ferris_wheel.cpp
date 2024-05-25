#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; long x; cin >> n >> x;
    long arr[n];
    int ans = 0;
    
    for(int k = 0 ; k < n ; k++){
        cin >> arr[k];
    }
    sort(arr, arr + n);
    int i = 0, j = n-1 ;
    for( ;  j > i  ; ){
        if(arr[i] + arr[j] < x+1){
            i++;
            j--;
            ans++;
        }
        else{
            j--;
            ans++;
        }
    }
    if (i==j){
        ans++;
    }
    cout << ans;


    return 0;
}