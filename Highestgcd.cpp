#include <bits/stdc++.h>
using namespace std;

int max(int* arr, int n){
    int ruff = arr[0];
    for(int i = 1 ; i < n ; i++){
        if(arr[i] > ruff){
            ruff = arr[i];
        }
    }
    return ruff;
}


int main(){
    int n ; cin >> n;
    int j = n-2;
    int counter = 0;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int MAX = max(arr, n);
    for(int i = MAX ; i > 1; i--){
        if(i == arr[j]){
            j--;
        }
        counter = 0;
        for(int k = j+1 ; k < n ; k++){
            if(arr[k] % i == 0){
                counter++;
            }
            if(counter > 1){
                cout << i;
                return 0;
            }
        }
    }

    cout << "1";

    return 0;
}