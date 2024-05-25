#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    cout << "Start";
    int n; cin >> n;
    long arr[n+1]; long dep[n+1];
    arr[n] = dep[n] = 1e9;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] >> dep[i];
    }
    cout << "The array taken in is\n";
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " << dep[i] << "\n";
    } 
    sort(arr, arr + n); sort(dep, dep + n);
    vector<int> v;
    v.push_back(0);
    int i = 0, j = 0;
    int size;
    for( ;(i != n && j != n  );  ){
        size = v.size();
        if(arr[i] < dep[j]){
            v.push_back(v[size-1] + 1);
            i++;
        }
        else if(arr[i] > dep[j]){
            v.push_back(v[size-1] - 1);
            j++;
        }
        else if(arr[i] = dep[j]){
            v.push_back(v[size-1] + 1);
            v.push_back(v[size-1]);
            i++;
            j++;
        }        
    }
    size = 0;
    cout << "\n";
    for(int i = 0 ; i < v.size(); i++){
        cout << v[i] << " ";
        if(v[i] > size){
            size = v[i];
        }
    }

    cout << size;

    return 0;
}